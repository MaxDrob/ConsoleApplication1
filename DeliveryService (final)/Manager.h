#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Manager : public Person
{
private:
	string position;

public:

	string getPosition();
	void setPosition(string position);
	void setInfoManager();
	void getInfoManager();
};


