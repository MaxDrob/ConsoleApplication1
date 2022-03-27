#pragma once
#include <string>
#include "Person.h"

class Delivery : public Person
{
private:
	string area;


public:
	string getArea();

	void setArea(string area);
	void setInfoDelivery();
	void getInfoDelivery();;

};