#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;


int main()
{

	const int N = 256;  
	char text[N]; 
	cout << "Type here: \n"; 
	cin.getline(text, N);      

	ofstream out("C:\\Users\\max33\\Desktop\\testCPP.txt");
	out << text << '\n';

	out.close();

	ifstream in("C:\\Users\\max33\\Desktop\\testCPP.txt");
	in.getline(text, N);              

	in.close();
	cout << text << '\n';

	cin.get();

}