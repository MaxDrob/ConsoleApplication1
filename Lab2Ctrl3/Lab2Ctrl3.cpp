// Lab2Ctrl3.cpp : Задача про размен монет. Исходим из того, что
//

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	int val[] = { 10, 5, 2, 1 };
	int sum;
	cout << "Введите сумму монет: ";
	cin >> sum;
	int i = 0, quantity;
	while (sum > 0) {
		if (sum >= val[i]) {
			quantity = sum / val[i];
			sum = sum - quantity * val[i];
			cout << "В указанной сумме содержится монет: " << quantity << " номиналом " << val[i] << " рублей" << endl;
			i++;
		}
		else {
			i++;
		}
	}
}