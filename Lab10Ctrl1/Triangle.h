#pragma once
#include <iostream>
#include "Dot.h"

using namespace std;

class Triangle
{
public:

	Triangle(Dot a, Dot b, Dot c) :dA(a), dB(b), dC(c) { findSide(); }

	double findSide();
	double findPerimetr();
	double findSquare();


private:
	double ab;
	double bc;
	double ca;


	Dot dA;
	Dot dB;
	Dot dC;
};

