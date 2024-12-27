#pragma once
#include "IT.h"
#include "LT.h"
#include "LEX.h"

namespace Semantic
{
	void doAnalyse(LEX::LEX t);
	void operands(LEX::LEX t);
	void returns(LEX::LEX t);
	void parameters(LEX::LEX t);

}