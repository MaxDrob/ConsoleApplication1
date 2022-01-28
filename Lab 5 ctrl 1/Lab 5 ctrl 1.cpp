// Lab 5 ctrl 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

void FillArray(int array[], const int size)
{
	int x = sizeof(array);
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;

	}

}

void ToConsole(int array[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;

	}
}

void main()
{
	const int SIZE = 100;
	int array[SIZE];

	int x = sizeof(array);
	FillArray(array, SIZE);
	ToConsole(array, SIZE);
	cout << "Array size is: " << sizeof(array) << " bytes" << endl;
}