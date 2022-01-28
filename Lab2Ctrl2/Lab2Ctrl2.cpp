// Lab2Ctrl2.cpp : Определение наибольшего из трех чисел
//

#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	x = y = z = 0;
	cout << "Type numbers here:" << endl;
	cin >> x >> y >> z;
	if (x >= y && x > z) cout << x;
	else if (y > x && y >= z) cout << y;
	else if (z >= x && z > y) cout << z;
	else cout << "Error!";
}

