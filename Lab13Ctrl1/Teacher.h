#pragma once

class Teacher : public Human
{
private:
	unsigned int workTime;
public:
	Teacher(std::string firstName, std::string secondName, std::string lastName, unsigned int workTime) :
		Human(firstName, secondName, lastName), workTime(workTime) {}

	std::string getInfo() {
		std::string infoStr;
		infoStr = "\tWorking hours: " + std::to_string(workTime);
		return infoStr;
	}
};
