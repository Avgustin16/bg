// Class5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Employee
{
private:
	string name;
	string id;
	string position;
	int salary;
public:
	Employee();
	void Input();
	string Get_name()
	{
		return name;
	}
	string Get_id()
	{
		return id;
	}
	string Get_position()
	{
		return position;
	}
	int Get_salary()
	{
		return salary;
	}
};

Employee::Employee()
{
	name = "";
	id = "";
	position = "";
	salary = 0;
}

void Employee::Input()
{
	cout << "name: "; cin >> name;
	cout << "salary: "; cin >> salary;
	cout << endl;
}

int main()
{
	Employee Employee[5];
	for (int i = 0; i<5; i++)
	{
		Employee[i].Input();
	}
	for (int i = 0; i < 5; i++)
	{
		if (Employee[i].Get_salary() > 700)
		{
			cout << Employee[i].Get_name() << endl;
		}
	}
	cout << endl;
	return 0;
}