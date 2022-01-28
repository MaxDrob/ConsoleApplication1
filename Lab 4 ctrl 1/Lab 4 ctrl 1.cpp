#include <iostream>
#include <cmath>
int Myroot();
using namespace std;


int Myroot(double a, double b, double c, double& x1, double& x2) 
{

	
	double dis = b * b - 4 * a*c;

	if (dis > 0) {
		x1 = (-b + sqrt(dis)) / (2 * a);
		x2 = (-b - sqrt(dis)) / (2 * a);
		return 0;
	}

	else if (dis == 0) {

		x1 = -b / (2 * a);
		return 1;
	}

	else {
		x1 = ((-b) + sqrt(dis)) / (2 * a);
		x2 = ((-b) - sqrt(dis)) / (2 * a);
		return 2;

	};
}

	int main()
	{
		
		double a, b, c, x1, x2;
		cout << "Enter ABC's" << endl;
		cin >> a >> b >> c;
		int result = Myroot(a, b, c, x1, x2);
		switch (result)
		{
		case 0: cout << "Roots are real";
			break;

		case 1:
			cout << "Roots are equal" << x1;
			break;

		case 2:
			cout << "Roots do not exist" << x2;

		}
	}

	int Myroot()
	{
		return 0;
	}
