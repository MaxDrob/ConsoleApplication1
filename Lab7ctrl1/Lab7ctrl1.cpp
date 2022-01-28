#include <iostream>
#include <windows.h>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;


	void ShowTime()
	{
		cout << hours << ":" << minutes << ":" << seconds << "\n";
	}
};

Time AddTime(Time t1, Time t2)
{
	Time t;
	t.hours = t1.hours + t2.hours;
	t.minutes= t1.minutes+ t2.minutes;
	t.seconds = t1.seconds + t2.seconds;

	if (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}

	if (t.minutes>= 60)
	{
		t.minutes-= 60;
		t.hours++;
	}
	return t;
}

Time SubtractTime(const Time& t1, const Time& t2)
{
	Time t;
	t.hours = t1.hours - t2.hours;
	t.minutes= t1.minutes- t2.minutes;
	t.seconds = t1.seconds - t2.seconds;

	if (t.seconds < 0)
	{
		t.seconds += 60;
		t.minutes--;
	}

	if (t.minutes< 0)
	{
		t.minutes+= 60;
		t.hours--;
	}
	return t;
}

Time InputTime()
{
	Time t;
	cout << "Input hours: ";
	cin >> t.hours;
	cout << "Input minutes: ";
	cin >> t.minutes;
	cout << "Input seconds: ";
	cin >> t.seconds;

	return t;
}


int main()
{
	
	Time t1 = InputTime();
	Time t2 = InputTime();
	Time t3 = AddTime(t1, t2);
	Time t4 = SubtractTime(t1, t2);

	cout << "Input result 1: "; t1.ShowTime();
	cout << "Input result 2: "; t2.ShowTime();
	cout << "Added time: "; t3.ShowTime();
	cout << "Substracted time: "; t4.ShowTime();
}