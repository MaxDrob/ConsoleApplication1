#include "Delivery.h"

string Delivery::getArea()
{
	return area;
}



void Delivery::setArea(string area)
{
	this->area = area;
}


void Delivery::setInfoDelivery()
{
	cout << "Add delivery guy data:" << endl;

	cout << "Name" << endl;
	string n;
	cin.ignore();
	getline(cin, n);
	setName(n);

	cout << "Last Name" << endl;
	string l;
	getline(cin, l);
	setLastname(l);


	cout << "Operating Area" << endl;
	getline(cin, area);



	cout << "Phone number" << endl;
	string p;
	getline(cin, p);
	setPhone(p);
}

void Delivery::getInfoDelivery()
{
	cout << getName() << " " << getLastname() << " " << endl;
	cout << "Area: " << area << endl;
	cout << "Phone number " << getPhone() << endl;
}