#include "stdafx.h"
#include "StrategyContext.h"
#include "StrategySuper.h"
CStrategyContext::CStrategyContext()
{
	_m_pCStrategy = NULL;
}

CStrategyContext::~CStrategyContext()
{
	_m_pCStrategy = NULL;
}

CStrategyContext::CStrategyContext(CStrategySuper &cssContext)
{
	*_m_pCStrategy = cssContext;
}

double CStrategyContext::GetSumPrice(double & price)
{
	return _m_pCStrategy->CalcSumPrice(price);
	//return price;
}