#include <iostream>
using namespace std;
int bi(int digits)
{
	if (digits == 0)
		return 0;
	else
		return (digits % 2 + 10 * bi(digits / 2));
}
int main()
{
	int digits = 0;
	std::cout << "Enter the decimal you want to convert into BINARY: ";
	cin >> digits;
	cout << "Result: " << bi(digits) << endl;

}