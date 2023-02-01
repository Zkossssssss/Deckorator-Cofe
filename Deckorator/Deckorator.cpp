#include <iostream>
#include "Beverage.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

using namespace std;

int main()
{
	Beverage* beverage1 = new Espresso();
	cout << beverage1->getDescription() << ": " << beverage1->cost() << endl;

	Beverage* beverage2 = new Espresso();
	beverage2 = new Milk(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Soy(beverage2);
	beverage2 = new Whip(beverage2);

	cout << beverage2->getDescription() << ": " << beverage2->cost() << endl;

	Beverage* beverage3 = new DarkRoast();
	cout << beverage3->getDescription() << ": " << beverage3->cost() << endl;

	Beverage* beverage4 = new DarkRoast();
	beverage4 = new Milk(beverage4);
	beverage4 = new Mocha(beverage4);
	beverage4 = new Soy(beverage4);
	beverage4 = new Whip(beverage4);

	cout << beverage4->getDescription() << ": "	<< beverage4->cost() << endl;

	Beverage* beverage5 = new Decaf();
	cout << beverage5->getDescription() << ": " << beverage5->cost() << endl;

	Beverage* beverage6 = new Decaf();
	beverage6 = new Milk(beverage6);
	beverage6 = new Mocha(beverage6);
	beverage6 = new Soy(beverage6);
	beverage6 = new Whip(beverage6);

	cout << beverage6->getDescription() << ": " << beverage6->cost() << endl;

	Beverage* beverage7 = new HouseBlend();
	cout << beverage7->getDescription() << ": "
		<< beverage7->cost() << endl;

	Beverage* beverage8 = new HouseBlend();
	beverage8 = new Milk(beverage8);
	beverage8 = new Mocha(beverage8);
	beverage8 = new Soy(beverage8);
	beverage8 = new Whip(beverage8);

	cout << beverage8->getDescription() << ": " << beverage8->cost() << endl;

	return 0;
}
