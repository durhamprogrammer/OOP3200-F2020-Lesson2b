/*
 * @FileName: main.cpp
 * @Author  : Tom Tsiliopoulos
 * @Date    : September 20, 2020
 * 
 */



#include <iostream>
#include "Person.h"


int main()
{
	// instantiation
	Person person1;

	person1.SetName("Rose");
	person1.SetAge(22);
	
	person1.SaysHello();

	std::cout << "\n==================================================================" << std::endl;
	std::cout << person1.GetName() << " is a Person" << std::endl;
	std::cout << person1.GetName() << " is " << person1.GetAge() << " years old" << std::endl;
	std::cout << "==================================================================\n" << std::endl;

	Person person2;
	
	person2.SetName("Nick");
	person2.SetAge(26);

	person2.SaysHello();

	std::cout << "\n==================================================================" << std::endl;
	std::cout << person2.GetName() << " is a Person" << std::endl;
	std::cout << person2.GetName() << " is " << person2.GetAge() << " years old" << std::endl;
	std::cout << "==================================================================" << std::endl;
}


