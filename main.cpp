#include <iostream>
#include <typeinfo>
#include "Dendrite.h"

class Base
{
public:
	int a;
};

class Derived : public Base
{
public:
	int b;
};

int main()
{
	Derived derived;
	Base *p;
	p = &derived;
	return 0;
}