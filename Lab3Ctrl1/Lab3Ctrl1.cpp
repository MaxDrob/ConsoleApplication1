#include <iostream>
#include <math.h>

using namespace std;

double loc(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double TriSqare(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}



int main()

{


	double s = 0;
	int n = 5; 
	double a, b, c = 0;
	int *x = new int[n];
	int *y = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "x:" << i + 1 << "=";
		cin >> x[i];
		cout << "y:" << i + 1 << "=";
		cin >> y[i];
	}

	for (int i = 0; i < (n - 2); i++)  // 𝑠=(𝑥1𝑦1)(𝑥1+𝑦1+𝑥2+𝑦2)(x2+y2)
	{
		a = loc(0, 0, x[i + 1], y[i + 1]);
		b = loc(x[i + 1], y[i + 1], x[i + 2], y[i + 2]);
		c = loc(x[i + 2], y[i + 2], 0, 0);
		s += TriSqare(a, b, c);
	}

	cout << "Square: " << s;

}
