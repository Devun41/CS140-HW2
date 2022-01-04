/*
Devun Schneider
CS140-04 
Hawkins
Write a program that asks for name & age, 
returns: name, age, max heart rate, target heart rate range
*/

#include <iostream>
#include <string>
#include "Heart.h"


//driver program

int main()
{
	std::string name="";
	int age=0;
	//prompts for name
	std::cout << "Please tell me your name: " << std::endl;
	//sets string 'name' equal to the input given
	std::cin >> name;
	//prompts for age
	std::cout << "Please tell me your age: " << std::endl;
	//sets int 'age' equal to the input given
	std::cin >> age;


	Heart h(name,age);
	//display name
	std::cout << "\nYour name is: " << name << std::endl;
	//display age
	std::cout << "Age :" << age << std::endl;
	//display maximum heart rate
	std::cout << "Maximum heart rate :" << h.getMaxHR() << std::endl;
	//display target heart rate message
	h.getTargetRange();

	return 0;
}


