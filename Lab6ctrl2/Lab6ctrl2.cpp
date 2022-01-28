// Lab6ctrl2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	std::ofstream out("ArrayFrom5thTask", std::ios::out | std::ios::binary);
	if (!out)
	{
		cout << "Cannot open the file";
		return 1;
	}
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	out.write((char*)a, sizeof(a));
	int min = 0; 
	int buf = 0; 
	for (int i = 0; i < N; i++)
	{
		min = i;
		
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	out << "\n";
	out.write((char*)a, sizeof(a));
	out.close();
	return 0;
}

bool WriteArrayToFile(const int size, int* arr, std::string nameFile = "ArrFile.txt") {
	//std::ios::app - ????? ??? ???????? ? ????
	std::ofstream out(nameFile);
	if (!out)
	{
		std::cout << "???? ??????? ??????????\n";
		return false;
	}
	if (out.is_open())
	{
		for (int i = 0; i < size; i++) {
			out << arr[i] << std::endl;
		}
	}
	out.close();
	return true;
}