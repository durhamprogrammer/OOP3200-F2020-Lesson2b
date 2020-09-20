/*
 * @FileName: main.cpp
 * @Author  : Tom Tsiliopoulos
 * @Date    : September 20, 2020
 * 
 */



#include <iostream>
#include "Person.h"

const int ARRAY_SIZE = 2;

void buildPeopleArray(Person people[])
{
	for (int count = 0; count < ARRAY_SIZE; ++count)
	{
		std::string name;
		int age;
		
		std::cout << "Please Enter Your Name: ";
		std::cin >> name;
		std::cout << std::endl;
		std::cout << "Please Enter Your Age: ";
		std::cin >> age;
		std::cout << std::endl;

		const Person person = Person(name, int(age));

		people[count] = person;

		std::cout << "\n---------------------------------------------" << std::endl;
	}
}

void displayPeopleArray(Person people[])
{
	for (int count = 0; count < ARRAY_SIZE; ++count)
	{
		people[count].SaysHello();
		std::cout << people[count].ToString() << std::endl;
	}
}


int main()
{
	Person people[ARRAY_SIZE];

	buildPeopleArray(people);

	displayPeopleArray(people);
}


