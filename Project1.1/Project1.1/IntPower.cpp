#include "IntPower.h"
#include <iostream>

using namespace std;

void IntPower::SetFirst(float value)
{
	first = value;
}

void IntPower::SetSecond(int value)
{
	second = value;
}

bool IntPower::Init(float x, int y)
{
	if (x != 0)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void IntPower::Display() const
{
	cout << endl;
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

void IntPower::Read()
{
	float x; 
	int y;
	do
	{
		cout << "Input complex value: " << endl;
		cout << "first = "; cin >> x;
		cout << "second = "; cin >> y;

	} while (!Init(x, y));
}

void IntPower::power()
{
	double z;
	z = pow(first, second);
	cout << "z = " << z << endl;
}
