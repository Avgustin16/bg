// Class5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	string id;
	string position;
	double salary;
public:
	Employee(string n, string i, string p, double s)
	{
		name = n;
		id = i;
		position = p;
		salary = s;
	}
	Employee()
	{
		name = "";
		id = "0";
		position = "none";
		salary = 0;
	}
	string get_name()
	{
		return name;
	}
	string get_id()
	{
		return id;
	}
	string get_position()
	{
		return position;
	}
	double get_salary()
	{
		return salary;
	}
};

int main()
{
	fstream file;
	file.open("TextForClass5.txt", ios::in);
	Employee workers[5];
	for (int i = 0; i < 5; i++)
	{
		string name;
		string id;
		string pos;
		double salary;
		file >> name;
		file >> id;
		file >> pos;
		file >> salary;
		workers[i] = Employee(name, id, pos, salary);
		if (salary > 700)
		{
			cout << workers[i].get_name() << " ";
			cout << workers[i].get_salary() << " ";
			cout << endl;
		}
	}
	Employee buf;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (workers[j].get_salary() < workers[j + 1].get_salary())
			{
				buf = workers[j + 1];
				workers[j + 1] = workers[j];
				workers[j] = buf;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << workers[i].get_name() << " - " << workers[i].get_id() << " - " 
			 << workers[i].get_position() << " - " << workers[i].get_salary()<<endl;
	}
	file.close();
	return 0;
}
