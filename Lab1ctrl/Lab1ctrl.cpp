// Lab1ctrl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, sum;
	cout << "Enter a number of vertices:\n";
	cout << "n = ";
	cin >> n;
	struct Polygon
	{
		int x;
		int y;

	} 
	
	data [n];
	cout << "Enter coordinates for each vertex:\n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": ";
		cin >> data[i].x >> data[i].y;
	}
	data[n].x = data[0].x;
	data[n].y = data[0].y;
	sum = 0;
	for (int i = 1; i < n + 1; i++)
	{
		sum += (data[i - 1].x * data[i].y - data[i - 1].y * data[i].x);
	}
	cout.precision(2);
	cout << "Polygon area: " << fixed << abs((double)sum / 2) << endl;
	system("pause");
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
