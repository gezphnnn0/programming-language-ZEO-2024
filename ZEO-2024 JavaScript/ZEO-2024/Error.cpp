﻿#include "Error.h"
namespace Error
{
	
	ERROR errors[ERROR_MAX_ENTRY] = 
	{
		ERROR_ENTRY(0, "[SYS]: Недопустимый код ошибки"),
		ERROR_ENTRY(1, "[SYS]: Системный сбой"),
			ERROR_ENTRY(2, "[SYS]: Недопустимое количество ошибок"),
			ERROR_ENTRY(3, "[SYS]: "),
			ERROR_ENTRY_NODEF(4),
			ERROR_ENTRY_NODEF(5),
			ERROR_ENTRY_NODEF(6),
			ERROR_ENTRY_NODEF(7),
			ERROR_ENTRY_NODEF(8),
			ERROR_ENTRY_NODEF(9),
			ERROR_ENTRY_NODEF10(10),
			ERROR_ENTRY_NODEF10(20),
			ERROR_ENTRY_NODEF10(30),
			ERROR_ENTRY_NODEF10(40),
			ERROR_ENTRY_NODEF10(50),
			ERROR_ENTRY_NODEF10(60),
			ERROR_ENTRY_NODEF10(70),
			ERROR_ENTRY_NODEF10(80),
			ERROR_ENTRY_NODEF10(90),
			ERROR_ENTRY(100, "[PARM]: Параметр -in должен быть задан"),
			ERROR_ENTRY_NODEF(101),
			ERROR_ENTRY_NODEF(102),
			ERROR_ENTRY_NODEF(103),
			ERROR_ENTRY(104, "[PARM]: Превышена длина входного параметра"),
			ERROR_ENTRY_NODEF(105),
			ERROR_ENTRY_NODEF(106),
			ERROR_ENTRY_NODEF(107),
			ERROR_ENTRY_NODEF(108),
			ERROR_ENTRY_NODEF(109),
			ERROR_ENTRY(110, "[IN]: Ошибка при открытии файла с исходным кодом (-in)"),
			ERROR_ENTRY(111, "[IN]: Недопустимый символ в исходном файле (-in)"),
			ERROR_ENTRY(112, "[IN]: Превышен предел размера входного файла (-in)"),
			ERROR_ENTRY(113, "[IN]: Превышен предел размера лексемы"),
			ERROR_ENTRY(114, "[IN]: Отсуствует закрывающая кавычка"),
			ERROR_ENTRY(115, "[IN]: Входная строка превышает максимальный размер"),
			ERROR_ENTRY(116, "[IN]: Количество открывающих фигурных скобок не совпадает с количеством закрывающих"),
			ERROR_ENTRY_NODEF(117),
			ERROR_ENTRY_NODEF(118),
			ERROR_ENTRY_NODEF(119),
			ERROR_ENTRY(120, "[LA]: Ошибка при разборе токена"),
			ERROR_ENTRY_NODEF(121),
			ERROR_ENTRY(122, "[LA]: Идентификатор не имеет типа"),
			ERROR_ENTRY(123, "[LA]: Значение целочисленного литерала не входит в диапазон -128..127"),
			ERROR_ENTRY(124, "[LA]: Отсутствует точка входа"),
			ERROR_ENTRY(125, "[LA]: Обнаружена вторая точка входа"),
			ERROR_ENTRY_NODEF(126),
			ERROR_ENTRY_NODEF(127),
			ERROR_ENTRY_NODEF(128),
			ERROR_ENTRY_NODEF(129),
			ERROR_ENTRY(130, "[ITable]: Ошибка создания таблицы идентификаторов: размер превышает допустимое значение"),
			ERROR_ENTRY(131, "[LTable]: Ошибка создания таблицы литералов: размер превышает допустимое значение"),
			ERROR_ENTRY(132, "[ITable]: Ошибка добавления в таблицу лексем: превышен макимальный размер таблицы"),
			ERROR_ENTRY(133, "[LTable]: Ошибка добавления в таблицу идентификаторов: превышен макимальный размер таблицы"),
			ERROR_ENTRY(134, "[ITable]: Ошибка получения элемента из таблицы идентификаторов: элемент не создан или индекс выходит за границы массива"),
			ERROR_ENTRY(135, "[LTable]: Ошибка получения элемента из таблицы литералов: элемент не создан или индекс выходит за границы массива"),
			ERROR_ENTRY_NODEF(136),
			ERROR_ENTRY_NODEF(137),
			ERROR_ENTRY_NODEF(138),
			ERROR_ENTRY_NODEF(139),
			ERROR_ENTRY_NODEF10(140),
			ERROR_ENTRY_NODEF10(150),
			ERROR_ENTRY_NODEF10(160),
			ERROR_ENTRY_NODEF10(170),
			ERROR_ENTRY_NODEF10(180),
			ERROR_ENTRY_NODEF10(190),
			ERROR_ENTRY_NODEF100(200),
			ERROR_ENTRY_NODEF100(300),
			ERROR_ENTRY_NODEF100(400),
			ERROR_ENTRY_NODEF100(500),

			ERROR_ENTRY(600, "[Syntaxis]: Неверная структура программы"),
			ERROR_ENTRY(601, "[Syntaxis]: Ошибочный оператор"),
			ERROR_ENTRY(602, "[Syntaxis]: Ошибка в выражении"),
			ERROR_ENTRY(603, "[Syntaxis]: Ошибка в параметрах функции"),
			ERROR_ENTRY(604, "[Syntaxis]: Ошибка в параметрах вызываемой функции"),
			ERROR_ENTRY(605, "[Syntaxis]: Ошибка знака в выражении"),
			ERROR_ENTRY(606, "[Syntaxis]: Ошибка синтаксического анализа"),
			ERROR_ENTRY(607, "[Syntaxis]: Ошибка условной конструкции"),
			ERROR_ENTRY_NODEF(608),
			ERROR_ENTRY(609, "[Syntaxis]: Обнаружена синтаксическая ошибка (смотри журнал Log)"),
			ERROR_ENTRY_NODEF10(610),
			ERROR_ENTRY_NODEF10(620),
			ERROR_ENTRY_NODEF10(630),
			ERROR_ENTRY_NODEF10(640),
			ERROR_ENTRY_NODEF10(650),
			ERROR_ENTRY_NODEF10(660),
			ERROR_ENTRY_NODEF10(670),
			ERROR_ENTRY_NODEF10(680),
			ERROR_ENTRY_NODEF10(690),

			ERROR_ENTRY(700, "[Semantic]: Повторное объявление идентификатора"),
			ERROR_ENTRY(701, "[Semantic]: Ошибка в возвращаемом значении"),
			ERROR_ENTRY(702, "[Semantic]: Ошибка в передаваемых значениях в функции: количество параметров не совпадает"),
			ERROR_ENTRY(703, "[Semantic]: Ошибка в передаваемых значениях в функции: типы параметров не совпадают"),
			ERROR_ENTRY(704, "[Semantic]: Нарушены типы данных в выражении или условной конструкции"),
			ERROR_ENTRY(705, "[Semantic]: Ошибка экспорта: в библиотеке нет такой функции"),
			ERROR_ENTRY(706, "[Semantic]: Ошибка экспорта: неверные параметры"),
			ERROR_ENTRY(707, "[Semantic]: Ошибка экспорта: ошибочный тип возвращаемого значения"),
			ERROR_ENTRY(708, "[Semantic]: Для строк операторы запрещены"),
			ERROR_ENTRY(709, "[Semantic]: Ошибочные параметры условной конструкции: строки не могут быть параметрами условной конструкции"),
			ERROR_ENTRY(710, "[Semantic]: Ошибочный оператор: для типа char не разрешены операции"),
			ERROR_ENTRY(711, "[Semantic]: Для логических переменных использование арифметических и побитовых операторов запрещено"),
			ERROR_ENTRY(712, "[Semantic]: Количество параметров не может быть больше 10"),
			ERROR_ENTRY(713, "[Semantic]: Используется необъявленный идентификатор"),
		ERROR_ENTRY_NODEF10(720),ERROR_ENTRY_NODEF10(730),ERROR_ENTRY_NODEF10(740),
		ERROR_ENTRY_NODEF10(750),ERROR_ENTRY_NODEF10(760),ERROR_ENTRY_NODEF10(770),ERROR_ENTRY_NODEF10(780),
		ERROR_ENTRY_NODEF10(790),
		ERROR_ENTRY_NODEF100(800), ERROR_ENTRY_NODEF100(900)
	};
	ERROR geterror(int id)
	{
		ERROR out;

		if (0 > id || id > ERROR_MAX_ENTRY)
			out = errors[0];
		else
			out = errors[id];
		return out;
	}
	ERROR geterrorin(int id, int line = -1, int col = -1)
	{
		ERROR out;

		if (0 > id || id > ERROR_MAX_ENTRY)
			out = errors[0];
		else
			out = errors[id];
		out.inext.line = line;
		out.inext.col = col;
		return out;
	}
}