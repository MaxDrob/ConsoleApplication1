#include <iostream>
using namespace std;


int Input(int a, int b)
{
	if ((a != 0) && (b != 0)) return true;
	else return false;
}

int main()
{
	
	int a, b;
	cout << "Type two numbers: ";
	cin >> a >> b;
	if (Input(a, b) == false) 
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	std::cout << "s=" << s;
	return 0;

}