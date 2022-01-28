#include <iostream>
#include <cmath>
using namespace std;

double TriangleSq(double a, double b, double c)
{
	double p = (a + b + c) / 2; // scalene triangle
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

double TriangleSq(double a) // equilateral triangle 
{
	double p = (3 * a) / 2;
	double s = sqrt(p * (p - a) * (p - a) * (p - a));
	return s;
}

int main()
{

	int type;
	cout << "Select triangle:" << endl << "for equilateral type 1" << endl << "for Scalene type 2" << endl;
	cin >> type;
	double a, s = 0;


	switch (type)
	{
	case 1:
		cout << "Enter side's length ";
		cin >> a;
		s = TriangleSq(a);
		break;
	case 2:
		cout << "Enter side's length " << endl;
		double b, c;
		b = c = 0;
		cin >> a;
		cin >> b;
		cin >> c;
		s = TriangleSq(a, b, c);

	}
	cout << "Triangle's square is  " << s;

}

