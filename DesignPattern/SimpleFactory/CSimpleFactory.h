#pragma once
#include "COperator.h"
#include <afx.h>
class CSimpleFactory
{
public:
	static COperator * CreateOperator(CString &strOpSign);
};