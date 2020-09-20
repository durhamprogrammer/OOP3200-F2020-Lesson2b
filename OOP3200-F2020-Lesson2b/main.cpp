/*
 * @FileName: main.cpp
 * @Author  : Tom Tsiliopoulos
 * @Author2 : Rose Nguyen
 * @Date    : September 20, 2020
 * 
 */


#include <iostream>
#include <exception>
#include "Person.h"

const int ARRAY_SIZE = 2;


/// <summary>
/// This function gets input from the console
/// both the Name and age parameters are received from the input stream
/// simple validation is included
/// </summary>
/// <returns>
/// Person object
/// </returns>
Person ReadPersonFromConsole()
{
	std::string name;
	int age;
	bool validInput = false;
		
	std::cout << "Please Enter Your Name: ";
	std::cin >> name;
	std::cout << std::endl;

	while(!validInput)
	{
		try
		{
			std::cout << "Please Enter Your Age: ";
			std::cin >> age;
			std::cout << std::endl;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
				throw 0;
			}
			else if(age < 1)
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
				throw 1;
			}
			else
			{
				validInput = true;
			}
		}
		catch (int exception)
		{
			switch(exception)
			{
			case 0:
				std::cout << "Error: Please enter an integer for the age value" << std::endl;
				break;
			case 1:
				std::cout << "Error: Please enter an integer greater than 0 for the age value" << std::endl;
				break;
			default: ;
				std::cout << "Error: Please enter a valid age value" << std::endl;
			}
		}
	}

	// windows specific
	system("cls");

	return Person(name, age);
}

/// <summary>
/// This function builds an array of Person objects of ARRAY_SIZE
/// </summary>
/// <param name="people"></param>
void buildPeopleArray(Person people[])
{
	for (int count = 0; count < ARRAY_SIZE; ++count)
	{
		std::cout << "---- Enter New Person ----------------------------------------\n" << std::endl;
		
		people[count] = ReadPersonFromConsole();

	}
}

/// <summary>
/// This function displays an array of Person objects of ARRAY_SIZE
/// </summary>
/// <param name="people"></param>
void displayPeopleArray(Person people[])
{
	for (int count = 0; count < ARRAY_SIZE; ++count)
	{
		people[count].SaysHello();
		std::cout << people[count].ToString() << std::endl;
	}
}


/// <summary>
/// Main Function - entry point for our program
/// </summary>
/// <returns></returns>
int main()
{
	Person people[ARRAY_SIZE];

	buildPeopleArray(people);

	displayPeopleArray(people);
}


