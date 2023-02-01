#pragma once
#include "CondimentDecorator.h"

class Milk : public CondimentDecorator
{
private:
	Beverage* beverage;
public:
	Milk(Beverage* beverage);
	string getDescription();
	double cost();
};
