#pragma once
#include<string>

using namespace System;

ref class ManagedReference 
{
private:
	System::String^ name;
	int age;

public:
	ManagedReference(System::String^ name, int age)
		:name(name), age(age)
	{

	}

	System::String^ ToString() override {
		return System::String::Format("{0} ({1})", name, age);
	}

	~ManagedReference() 
	{
		Console::WriteLine("Disposing of ManagedReference");
    }
};

