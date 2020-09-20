#pragma once
#ifndef __PERSON__
#define __PERSON__
/*
 * @FileName: Person.h
 * @Author  : Tom Tsiliopoulos
 * @Date    : September 20, 2020
 *
 */

#include <string>


class Person
{
public:
	// Constructor
	Person(std::string name = "", int age = 0);

	// Destructor
	~Person();

	// getters and setters

	// getters (accessors)
	std::string GetName();
	int GetAge();

	// setters (mutators)
	void SetName(std::string name);
	void SetAge(int age);

	// methods
	void SaysHello();
	

private:
	std::string m_name;
	int m_age;
};


#endif /* defined (__PERSON__)*/

