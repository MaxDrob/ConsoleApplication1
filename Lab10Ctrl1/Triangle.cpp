#include <iostream>
#include "Triangle.h"
#include "Dot.h"

using namespace std;


double Triangle::findPerimetr()
{
	findSide();
	double p = (ab + bc + ca);
	p = (p * 100) / 100;
	return p;
}



double Triangle::findSide()
{
	ab = dA.distanceTo(dB);
	bc = dB.distanceTo(dC);
	ca = dC.distanceTo(dA);

	return ab, bc, ca;
}


double Triangle::findSquare()
{
	double p = findPerimetr() / 2;
	double s = sqrt(p * (p - ab) * (p - bc) * (p - ca));
	s = (s * 100) / 100;
	return s;
}

int main()
{

	Dot A = Dot(0, 2);
	Dot B = Dot(0, 3);
	Dot C = Dot(2, 0);
	Triangle t1 = Triangle(A, B, C);
	cout << "Perimeter = " << t1.findPerimetr() <<
		" and the Square = " << t1.findSquare() << endl;
}