#pragma once
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator {
private:
	Beverage* beverage;
public:
	Soy(Beverage* beverage);
	string getDescription();
	double cost();
};
