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

	std::cout << person1.ToString() << std::endl;

	Person person2;
	
	person2.SetName("Nick");
	person2.SetAge(26);

	person2.SaysHello();

	std::cout << person2.ToString() << std::endl;
	
}


