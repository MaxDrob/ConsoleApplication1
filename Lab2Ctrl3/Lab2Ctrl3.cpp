// Lab2Ctrl3.cpp : ������ ��� ������ �����. ������� �� ����, ���
//

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	int val[] = { 10, 5, 2, 1 };
	int sum;
	cout << "������� ����� �����: ";
	cin >> sum;
	int i = 0, quantity;
	while (sum > 0) {
		if (sum >= val[i]) {
			quantity = sum / val[i];
			sum = sum - quantity * val[i];
			cout << "� ��������� ����� ���������� �����: " << quantity << " ��������� " << val[i] << " ������" << endl;
			i++;
		}
		else {
			i++;
		}
	}
}