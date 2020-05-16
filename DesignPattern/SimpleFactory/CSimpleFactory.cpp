#include "stdafx.h"
#include "CSimpleFactory.h"

COperator * CSimpleFactory::CreateOperator(CString &strOpSign)
{
	COperator * oper = NULL;
	if (_T("+") == strOpSign)
	{
		oper = new COpAdd();
	}
	else if (_T("-") == strOpSign)
	{
		oper = new COpSub();
	}
	else if (_T("*") == strOpSign)
	{
		oper = new COpMutli();
	}
	else if (_T("/") == strOpSign)
	{
		oper = new COpDiv();
	}
	else if (_T("%") == strOpSign)
	{
		oper = new COpMod();
	}

	return oper;
}