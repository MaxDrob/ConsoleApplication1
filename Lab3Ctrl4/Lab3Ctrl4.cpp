#include <iostream>
using namespace std;
int rec (int);
int main() {
	int n;
	cout << "Type the value n: ";
	cin >> n;
	cout << "Result: " << rec(n) << endl;
}
int rec(int n) {
	if (n == 0)
		return 5;
	else
		return 5 * n + rec(n - 1);
}