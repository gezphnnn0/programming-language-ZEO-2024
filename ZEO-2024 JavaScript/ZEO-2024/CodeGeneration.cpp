#include "CodeGeneration.h"
#include <stack>
#define PRINTID out << idtable.table[lextable.table[i].idxTI].id;
#define PRINTIDI(j) out << idtable.table[lextable.table[j].idxTI].id;
namespace CG {

	void Const(LT::LexTable lextable, IT::IdTable idtable, std::ofstream& out) {
		out << "import { compare, absolute } from './library.mjs'\n\n";
		for (int i = 0; i < idtable.size; i++) {
			if (idtable.table[i].idtype == IT::L) {
				out << "const ";
				out << idtable.table[i].id;
				out << " = ";
				switch (idtable.table[i].iddatatype)
				{
				case IT::CHR:
					out << '\'' << idtable.table[i].value.vchar << '\'';
					break;
				case IT::BYTE:
					out << idtable.table[i].value.vbyte;
					break;
				case IT::STR:
					out << idtable.table[i].value.vstr.str;
					break;
				case IT::BOOL:
					out << idtable.table[i].value.vbool;
				default:
					break;
				}
				out << ";\n";
			}
		}
		out << "\n";
	}

	void Translate(LT::LexTable lextable, IT::IdTable idtable, std::ofstream& out)
	{
		Const(lextable, idtable, out);
		out << "try {";
		int curLevel = 0;
		bool hesis = false;
		bool iswhile = false;
		bool isleft = false;
		bool isrigth = false;
		bool isExtern = false;
		bool isDividing = false;
		char* lastname = (char*)"";
		int copy = 0;
		for (int i = 0; i < lextable.size; i++)
		{
			if (isExtern) {
				if (lextable.table[i].lexema != LEX_SEMICOLON) {
					continue;
				}
				isExtern = false;
				continue;
			}
			switch (lextable.table[i].lexema)
			{
			case LEX_CHAR:
				switch (idtable.table[lextable.table[i + 1].idxTI].idtype)
				{
				case IT::F:
					out << "function ";
					break;
				case IT::V:

					out << "let ";
					i++;
					PRINTID
						out << " = ";
					switch (idtable.table[lextable.table[i].idxTI].iddatatype)
					{
					case IT::STR: out << "\"\""; break;
					case IT::BYTE: out << "0"; break;
					case IT::CHR: out << "0"; break;
					case IT::BOOL: out << "0"; break;
					}
					break;
				case IT::P:break;
				}
				continue;
				break;
			case LEX_FUNCTION: out << "function "; break;
			case LEX_ID:
				if (copy == 1) {
					out << ',';
				}
				copy--;
				if (copy == 0) {
					out << ")";
				}
				PRINTID
				break;
			case LEX_LITERAL:
				copy--;
				PRINTID
					if (copy == 0) {
						out << ")";
					}
				break;
			case LEX_LEFTBRACE:
			case LEX_LEFT_SQUAREBRACE:
				if (hesis) { out << ')'; hesis = false; } out << "\n"; out << "{\n"; curLevel++; break;
			case LEX_RIGHTBRACE:
			case LEX_RIGHT_SQUAREBRACE:
				curLevel--; out << "}\n"; break;
			case LEX_LEFTHESIS: out << LEX_LEFTHESIS; break;
			case LEX_RIGHTHESIS: out << LEX_RIGHTHESIS; iswhile = false; break;
			case LEX_SEMICOLON: {
				if (hesis) { 
					out << ')'; 
				hesis = false; 
				} 
				out << LEX_SEMICOLON << "\n"; 
				if (isDividing) {
					out << "if(" << lastname << "=== Infinity) { throw new Error('you cant divide by zero');}\n";
					isDividing = false;
				}
				break;
			}
			case LEX_COMMA: out << LEX_COMMA << ' '; break;
			case LEX_RETURN: out << "return "; break;
			case LEX_WRITE: out << "console.log("; hesis = true; break;
			case LEX_MAIN: out << "function main()"; break;
			case LEX_OPERATOR: 
				if (lextable.table[i].data == '=') {
					lastname = idtable.table[lextable.table[i - 1].idxTI].id;
				}
				if (lextable.table[i].data == ':') {
					isDividing = true;
					out << "/"; break;
				}
				if (lextable.table[i].data == '/') {
					out << ">>"; break;
				}
				if (lextable.table[i].data == '\\') {
					out << "<<"; break;
				}
				out << lextable.table[i].data; break;
			case LEX_BOOL_OPERATOR: out << lextable.table[i].data; break;
			case LEX_UNTIL: out << "while("; hesis = true; iswhile = true; break;
			case LEX_IF: out << "if("; hesis = true; iswhile = true; break;
			case LEX_ADD: isExtern = true;
			}
		}
		out << "main();\n";
		out << "} \ncatch (e) { \nconsole.log(e.message);\n }";
	}

	void Generate(LEX::LEX t, Out::OUT o) {
		Translate(t.lextable, t.idtable, *o.stream);
	}
}