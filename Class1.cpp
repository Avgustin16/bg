// Class1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Animal
{
private:
	string name;
	int age;
	//string residence;
	//string food_type;
public:
	void set_name(string animal_name)
	{
		name = animal_name;
	}
	string get_name()
	{
		return name;
	}
	void set_age(int animal_age)
	{
		age = animal_age;
	}
	int get_age()
	{
		return age;
	}
};

int main()
{
	Animal tiger;
	tiger.set_name("Tiger");
	tiger.set_age(1);
	cout << tiger.get_name() << " , " << tiger.get_age() << endl;
    return 0;
}

