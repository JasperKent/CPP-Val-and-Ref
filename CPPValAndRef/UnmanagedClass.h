#pragma once
#include<string>
#include<iostream>

class UnmanagedClass
{
private:
	std::string name;
	int age;

public:
	UnmanagedClass(std::string name, int age)
		:name(name), age(age)
	{

	}

	friend std::ostream& operator<< (std::ostream& os, const UnmanagedClass& uc)
	{
		return os << uc.name << "(" << uc.age << ")";
	}

	~UnmanagedClass() 
	{
		std::cout << "Destructing UnmanagedClass\n";
	}
};

