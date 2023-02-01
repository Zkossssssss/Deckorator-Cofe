#pragma once
#include <iostream>
using namespace std;

class Beverage
{
protected:
	string description;

public:
	Beverage();
	virtual string getDescription();
	virtual double cost() = 0;
};