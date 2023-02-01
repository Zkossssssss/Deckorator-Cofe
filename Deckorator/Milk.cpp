#include "Milk.h"

Milk::Milk(Beverage* beverage)
{
	this->beverage = beverage;
}

string Milk::getDescription()
{
	return beverage->getDescription() + ", Milk";
}

double Milk::cost()
{
	return 35 + beverage->cost();
}
