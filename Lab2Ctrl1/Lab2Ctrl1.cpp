// ���������� ���
//

#include <iostream>

using namespace std;

int main()
{

	int year;
	cout << "Type year: ";
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // ��� �������� ����������, ���� ��� ����� ������ 4, �� �� ������ 100, � �����, ���� �� ������ 400
		cout << "Yes";
	else
		cout << "No";
}
