#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>

#include "Human.h"
#include "Student.h"
#include "Teacher.h"

int main()
{

	std::vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student* student = new Student("Jack", "Jackson", "Jr.", scores);
	unsigned int teacherWorkTime = 50;
	Teacher* teach = new Teacher("Peter", "Peterson", "Sr.", teacherWorkTime);
	std::vector<Human*> humans;
	humans.push_back(student);
	humans.push_back(teach);
	for (auto var : humans)
	{
		std::cout << var->getFullName() << std::endl;
		std::cout << var->getInfo() << std::endl;
	}

	return 0;
}