#pragma once
value class ManagedValue
{
private:
	System::String^ name;
	int age;

public:
	ManagedValue(System::String^ name, int age)
		:name(name), age(age)
	{

	}

	System::String^ ToString() override {
		return System::String::Format("{0} ({1})", name, age);
	}

	void SetAge(int a)
	{
		age = a;
	}
};

