#include <iostream>
#include <string>
#include <map>
#include "Person.h"
#include "Manager.h"
#include "Delivery.h"
using namespace std;

int main()
{

	map <string, Manager> ManagerMan;
	map <string, Delivery> DeliveryGuy;
	int worker;

	cout << "Press 1 to add manager information" << endl;
	cout << "Press 2 to add a delivery guy information" << endl;

	cin >> worker;
	if (worker == 1)
	{
		Manager aManagerMan;
		aManagerMan.setInfoManager();
		ManagerMan[aManagerMan.getLastname()] = aManagerMan;

		cout << "Data added sucessfully ";
		cout << endl << "To display manager's data, type last name" << endl;
		string f;
		getline(cin, f);
		ManagerMan[f].getInfoManager();
	}

	if (worker == 2)
	{
		Delivery aDeliveryGuy;
		aDeliveryGuy.setInfoDelivery();
		DeliveryGuy[aDeliveryGuy.getLastname()] = aDeliveryGuy;

		cout << "Data added sucessfully ";
		cout << endl << "To display delivery guy information, type last name" << endl;
		string f;
		getline(cin, f);
		DeliveryGuy[f].getInfoDelivery();
	}

	return 0;
}
