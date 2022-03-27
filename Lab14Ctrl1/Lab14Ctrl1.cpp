#include <iostream>
using namespace std;

template<class T>
double average(T arr[], int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return (double)sum / size;
}

template<class T>
void print_arr(T arr[], int size)
{
	int i = 0;
	for (int i = 0; i < size; i++) cout << arr[i] << ";";
	cout << endl;

}

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	double arrd[] = { 2.2,3.3,4.6,5.5,3.2,5.2,7.2,3.4,4.2 };
	char arrc[] = "Here's some text";
	long arrl[] = { 2143657687, 8978675645, 24354657 };
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	int k4 = sizeof(arrl) / sizeof(arrl[0]);

	cout << average(arr, k1) << endl;
	cout << average(arrd, k2) << endl;
	cout << average(arrc, k3) << endl;
	cout << average(arrl, k4) << endl;
}