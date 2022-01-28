#include <iostream>
#include <math.h>
using namespace std;

double pow_cube(double a)
{
	return pow(a, 1.0 / 3);
}

double iteration(double a)
{
	double x1, x2;
	x1 = a;
	
	do
	{
		x2 = x1;
		x1 = (a / (x1 * x2) + 2 * x2) / 3;
	}

	while (abs(x1 - x2) > 1e-10);
	return x1;
}

int main()
{

	double a;
	std::cout << "Enter desired number: ";
	cin >> a;
	cout << "Iteration result: " << iteration(a) << endl;
	cout << "Standard formula result " << pow_cube(a);
}