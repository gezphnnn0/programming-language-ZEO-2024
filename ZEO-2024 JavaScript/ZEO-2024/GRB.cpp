﻿#include "GRB.h"
#include <string.h>
#include "stdarg.h"

#include <iostream>
#define GRB_ERROR_SERIES 600


namespace GRB
{

	Greibach greibach(NS('S'), TS('$'),
		9,
		Rule(NS('S'), GRB_ERROR_SERIES + 0,
			7,
			Rule::Chain(7, TS('m'), TS('{'), NS('N'), TS('r'), NS('E'), TS(';'), TS('}')),
			Rule::Chain(6, TS('m'), TS('{'), TS('r'), NS('E'), TS(';'), TS('}')),
			Rule::Chain(15, TS('d'), TS('t'), TS('f'), TS('i'), TS('('), NS('F'), TS(')'), TS('{'), NS('N'), TS('r'), NS('E'), TS(';'), TS('}'), TS(';'), NS('S')),
			Rule::Chain(14, TS('d'), TS('t'), TS('f'), TS('i'), TS('('), NS('F'), TS(')'), TS('{'), TS('r'), NS('E'), TS(';'), TS('}'), TS(';'), NS('S')),
			Rule::Chain(14, TS('d'), TS('t'), TS('f'), TS('i'), TS('('), TS(')'), TS('{'), NS('N'), TS('r'), NS('E'), TS(';'), TS('}'), TS(';'), NS('S')),
			Rule::Chain(13, TS('d'), TS('t'), TS('f'), TS('i'), TS('('), TS(')'), TS('{'), TS('r'), NS('E'), TS(';'), TS('}'), TS(';'), NS('S')),
			Rule::Chain(6, TS('m'), TS('{'), TS('r'), NS('E'), TS(';'), TS('}'))
		),
		Rule(NS('N'), GRB_ERROR_SERIES + 1,
			17,
			Rule::Chain(4, TS('d'), TS('t'), TS('i'), TS(';')),
			Rule::Chain(6, TS('i'), TS('('), NS('F'), TS(')'), TS(';'), NS('N')),
			Rule::Chain(5, TS('d'), TS('t'), TS('i'), TS(';'), NS('N')),
			Rule::Chain(4, TS('i'), TS('v'), NS('E'), TS(';')),
			Rule::Chain(5, TS('i'), TS('v'), NS('E'), TS(';'), NS('N')),
			Rule::Chain(9, TS('a'), TS('t'), TS('f'), TS('i'), TS('('), NS('F'), TS(')'), TS(';'), NS('N')),
			Rule::Chain(8, TS('a'), TS('t'), TS('f'), TS('i'), TS('('), NS('F'), TS(')'), TS(';')),
			Rule::Chain(8, TS('a'), TS('t'), TS('f'), TS('i'), TS('('), TS(')'), TS(';'), NS('N')),
			Rule::Chain(7, TS('a'), TS('t'), TS('f'), TS('i'), TS('('), TS(')'), TS(';')),
			Rule::Chain(4, TS('w'), TS('i'), TS(';'), NS('N')),
			Rule::Chain(3, TS('w'), TS('i'), TS(';')),
			Rule::Chain(4, TS('w'), TS('l'), TS(';'), NS('N')),
			Rule::Chain(3, TS('w'), TS('l'), TS(';')),
			Rule::Chain(8, TS('o'), TS('('), NS('B'), TS(')'), TS('['), NS('N'), TS(']'), TS(';')),
			Rule::Chain(9, TS('o'), TS('('), NS('B'), TS(')'), TS('['), NS('N'), TS(']'), TS(';'), NS('N')),
			Rule::Chain(8, TS('u'), TS('('), NS('B'), TS(')'), TS('['), NS('N'), TS(']'), TS(';')),
			Rule::Chain(9, TS('u'), TS('('), NS('B'), TS(')'), TS('['), NS('N'), TS(']'), TS(';'), NS('N'))
		),
		Rule(NS('E'), GRB_ERROR_SERIES + 2,
			16,
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(2, TS('n'), TS('i')),
			Rule::Chain(2, TS('n'), TS('l')),
			Rule::Chain(3, TS('('), NS('E'), TS(')')),
			Rule::Chain(4, TS('i'), TS('('), NS('W'), TS(')')),
			Rule::Chain(3, TS('i'), TS('('), TS(')')),
			Rule::Chain(2, TS('i'), NS('M')),
			Rule::Chain(2, TS('l'), NS('M')),
			Rule::Chain(3, TS('n'), TS('i'), NS('M')),
			Rule::Chain(3, TS('n'), TS('l'), NS('M')),
			Rule::Chain(4, TS('n'), TS('('), NS('E'), TS(')')),
			Rule::Chain(5, TS('n'), TS('('), NS('E'), TS(')'), NS('M')),
			Rule::Chain(4, TS('('), NS('E'), TS(')'), NS('M')),
			Rule::Chain(4, TS('('), NS('E'), TS(')'), NS('M')),
			Rule::Chain(5, TS('i'), TS('('), NS('W'), TS(')'), NS('M'))
		),
		Rule(NS('M'), GRB_ERROR_SERIES + 3,
			4,
			Rule::Chain(2, TS('v'), NS('E')),
			Rule::Chain(4, TS('v'), TS('('), NS('E'), TS(')')),
			Rule::Chain(5, TS('v'), TS('('), NS('E'), TS(')'), NS('M')),
			Rule::Chain(3, TS('v'), NS('E'), NS('M'))
		),
		Rule(NS('F'), GRB_ERROR_SERIES + 4,
			5,
			Rule::Chain(2, TS('t'), TS('i')),
			Rule::Chain(4, TS('t'), TS('i'), TS(','), NS('F')),
			Rule::Chain(1, TS('i')),
			Rule::Chain(3, TS('i'), TS(','), NS('F')),
			Rule::Chain(3, TS('l'), TS(','), NS('F'))
		),
		Rule(NS('W'), GRB_ERROR_SERIES + 5,
			4,
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(3, TS('i'), TS(','), NS('W')),
			Rule::Chain(3, TS('l'), TS(','), NS('W'))
		),
		Rule(NS('B'), GRB_ERROR_SERIES + 6,
			6,
			Rule::Chain(3, TS('i'), TS('b'), TS('i')),
			Rule::Chain(3, TS('i'), TS('b'), TS('l')),
			Rule::Chain(3, TS('l'), TS('b'), TS('i')),
			Rule::Chain(3, TS('l'), TS('b'), TS('l')),
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l'))
		)

	);



	Rule::Chain::Chain(short psize, GRBALPHABET s, ...)
		: size(psize)
	{
		nt = new GRBALPHABET[psize];
		va_list params;
		va_start(params, psize);
		for (short i = 0; i < psize; ++i)
			nt[i] = va_arg(params, GRBALPHABET);
	};
	Rule::Rule() : chains(NULL), size(0), nn(0), iderror(NULL) {}
	Rule::Rule(GRBALPHABET pnn, int piderror, short psize, Chain c, ...)
		: nn(pnn), iderror(piderror), size(psize)
	{
		chains = new Chain[psize];
		va_list params;
		va_start(params, psize);
		for (int i = 0; i < size; i++)
			chains[i] = va_arg(params, Chain);
	};
	Greibach::Greibach(GRBALPHABET pstartN, GRBALPHABET pstbottom, short psize, Rule r, ...)
		: startN(pstartN), stbottomT(pstbottom), size(psize)
	{
		rules = new Rule[psize];
		va_list params;
		va_start(params, psize);
		for (int i = 0; i < size; i++)
			rules[i] = va_arg(params, Rule);
	};
	Greibach getGreibach() { return greibach; };
	short Greibach::getRule(GRBALPHABET pnn, Rule& prule)
	{
		short rc = -1, i = 0;
		while (i < size && rules[i].nn != pnn)
			i++;
		rc = i < size ? i : -1;
		prule = rules[rc];
		return rc;
	};
	Rule Greibach::getRule(short n)
	{
		Rule rc;
		if (n < size) rc = rules[n];
		return rc;
	};
	char* Rule::getCRule(char* b, short nchain)
	{
		char bchain[200];
		b[0] = Chain::alphabet_to_char(nn);
		b[1] = '-';
		b[2] = '>';
		b[3] = 0x00;
		chains[nchain].getCChain(bchain);
		strcat_s(b, sizeof(bchain) + 5, bchain);
		return b;
	};
	short Rule::getNextChain(GRBALPHABET t, Rule::Chain& pchain, short j)
	{
		short rc = -1;
		while (j < size && chains[j].nt[0] != t)
			++j;
		rc = j < size ? j : -1;
		if (rc >= 0)
			pchain = chains[rc];
		return rc;
	};
	char* Rule::Chain::getCChain(char* b)
	{
		for (int i = 0; i < size; i++)
			b[i] = Chain::alphabet_to_char(nt[i]);
		b[size] = 0x00;
		return b;
	};
}