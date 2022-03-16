#include <iostream>
#include "Triangle.h"

using namespace std;


int main()
{
	int a;
	int b;
	int c;

	cout << "Type triangle sides' length ehre " << endl;
	cout << "Side A: ";
	cin >> a;
	cout << "Side B: ";
	cin >> b;
	cout << "Side C: ";
	cin >> c;

	Triangle t(a, b, c);
	try
	{
		double s = t.Triangle::findSquare(t);
		cout << "S = " << s << endl;
	}
	catch (ifCorrect er)
	{
		cout << "Error occured";
		er.printMessage();
		return 1;
	}
	return 0;
}