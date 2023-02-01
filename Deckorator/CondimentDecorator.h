#pragma once
#include "Beverage.h"

class CondimentDecorator :
	public Beverage
{
	virtual string getDescription() = 0;
};
