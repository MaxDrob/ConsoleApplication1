#include "Manager.h"


string Manager::getPosition()
{
	return position;
}


void Manager::setPosition(string position)
{
	this->position = position;
}


void Manager::setInfoManager()
{
	cout << "Enter data:" << endl;
	cout << "Name:" << endl;
	string n;
	cin.ignore();
	getline(cin, n);
	setName(n);

	cout << "Last name" << endl;
	string l;
	getline(cin, l);
	setLastname(l);


	cout << "Position:" << endl;
	getline(cin, position);


	cout << "Phone number:" << endl;
	string p;
	getline(cin, p);
	setPhone(p);
}

void Manager::getInfoManager()
{
	cout << getName() << " " << getLastname() << " " << endl;
	cout << "Position: " << position << endl;
	cout << "Phone number: " << getPhone() << endl;

}
