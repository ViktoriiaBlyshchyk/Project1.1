#include <iostream>
#include "IntPower.h"

using namespace std;

IntPower makeIntPower(float x, int y)
{
	IntPower ip;
	if (!ip.Init(x, y))
		cout << "Wrong length parametrs" << endl;
	return ip;
}

int main()
{
	IntPower ip1, ip2, ip;

	cout << "IntPower1" << endl;
	ip1.Read();
	ip1.Display();
	ip1.power();

	cout << endl;
	cout << "IntPower2" << endl;
	ip2.SetFirst(2);
	ip2.SetSecond(4);
	
	ip2.GetFirst();
	ip2.GetSecond();
	ip2.power();

	cout << endl;
	cout << "IntPower3" << endl;
	float x;
	int y;
	cout << "first = "; cin >> x;
	cout << "second = "; cin >> y;
	ip = makeIntPower(x, y);
	ip.Display();
	ip.power();

	return 0;
}
