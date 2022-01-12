// cntrlTEST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	system("chcp 1251");
	cout.precision(2);
	double S;
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	cout << "\nВведите последовательно координаты вершин x1,y1...x5,y5:\n";
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	cin >> x4;
	cin >> y4;
	cin >> x5;
	cin >> y5;

	S = abs((x1*y2) + (x2*y3) + (x3*y4) + (x4*y5) + (x5*y1) - (x2*y1) - (x3*y2) - (x4*y3) - (x5*y4) - (x1*y5));
	cout << "Площадь: " << abs(S) / 2;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
