#include <iostream>
using namespace std;

struct Roots
{
	double x1;
	double x2;
	bool solution;


	void ShowRoot()
	{
		if (!solution)
			cout << "No actual root found" << endl;
		else
			cout << "Roots found: x1 = " << x1 << "\tx2 = " << x2 << endl;
	}
};

Roots FindRoots(double a, double b, double c)
{
	Roots root;
	double d = b * b - 4 * a * c;
	if (d < 0) root.solution = false;

	else if (d == 0)
	{
		root.solution = true;
		root.x1 = root.x2 = -(b / (2 * a));
	}
	else
	{
		root.x1 = ((-b) + sqrt(d)) / (2 * a);
		root.x2 = ((-b) - sqrt(d)) / (2 * a);
		root.solution = true;
	};
	return root;
}


int main()
{
	FindRoots(3, 3, -3).ShowRoot();
	FindRoots(2, -1, -4.0).ShowRoot();
	FindRoots(2, 2, 0).ShowRoot();
}
