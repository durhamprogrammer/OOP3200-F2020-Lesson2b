/*
 * @FileName: Person.cpp
 * @Author  : Tom Tsiliopoulos
 * @Date    : September 20, 2020
 *
 */


#include "Person.h"

#include <iostream>

Person::Person(std::string name, int age)
{
	m_name = name;
	m_age = age;
}

Person::~Person()
= default;

std::string Person::GetName()
{
	return m_name;
}

int Person::GetAge()
{
	return m_age;
}

void Person::SetName(std::string name)
{
	m_name = name;
}

void Person::SetAge(int age)
{
	m_age = age;
}

void Person::SaysHello()
{
	std::cout << GetName() << " says Hello!" << std::endl;
}

std::string Person::ToString()
{
	std::string output_string;
	output_string += "\n==============================================\n";
	output_string += "Name: " + GetName() + "\n";
	output_string += "Age : " + std::to_string(GetAge()) + "\n";
	output_string += "==============================================\n";
	return output_string;
}
