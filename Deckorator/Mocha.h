#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
private:
	Beverage* beverage;
public:
	Mocha(Beverage* beverage);
	string getDescription();
	double cost();
};
