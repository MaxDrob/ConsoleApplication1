// Високосный год
//

#include <iostream>

using namespace std;

int main()
{

	int year;
	cout << "Type year: ";
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // Год является високосным, если его номер кратен 4, но не кратен 100, а также, если он кратен 400
		cout << "Yes";
	else
		cout << "No";
}
