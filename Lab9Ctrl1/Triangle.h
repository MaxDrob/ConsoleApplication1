#pragma once
#include <iostream>

using namespace std;

class ifCorrect
{
public:
	ifCorrect() : message("An error occured") {};
	void printMessage() const { cout << message << endl; }
private:
	string message;
};

class Triangle
{
private:
	int a;
	int b;
	int c;

public:
	Triangle(int side_a, int side_b, int side_c)
	{
		set_a(side_a);
		set_b(side_b);
		set_c(side_c);
	}


	void set_a(int side_a)
	{
		a = side_a;
	}
	void set_b(int side_b)
	{
		b = side_b;
	}
	void set_c(int side_c)
	{
		c = side_c;
	}
	int get_a()
	{
		return a;
	}
	int get_b()
	{
		return b;
	}
	int get_c()
	{
		return c;
	}

	double findSquare(Triangle t)
	{
		if (a + b < c || a + c < b || c + b < a)
			throw ifCorrect();

		double p = (a + b + c) / 2;
		double s;

		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
};
