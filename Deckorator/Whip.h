#pragma once
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator {
private:
	Beverage* beverage;
public:
	Whip(Beverage* beverage);
	string getDescription();
	double cost();
};
