#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time t1(9, 10, 99);
	t1.ShowTime();

	Time t2(10, 87, 59);
	t2.ShowTime();

	Time t3;
	t3.ShowTime();
	t3.AddTime(t1, t2).ShowTime();
}