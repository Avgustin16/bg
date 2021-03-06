// Class11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Worker
{
private:
	string name;
	string position;
	double salary;
public:
	Worker()
	{
		name = "none";
		position = "none";
		salary = 0;
	}
	void Input()
	{
		cout << "name: "; getline(cin, name);
		cout << "position: "; getline(cin, position);
		cout << "salary: "; cin >> salary;
		cin.ignore();
	}
	string get_name()
	{
		return name;
	}
	string get_position()
	{
		return position;
	}
	double get_salary()
	{
		return salary;
	}
	void Output()
	{
		cout << name << endl;
		cout << position << endl;
		cout << salary << endl;
	}
};

class PaidWorker :Worker
{
private:
	double increase;
	double newSalary;
public:
	PaidWorker()
	{
		Worker::Worker();
		increase = 0;
		newSalary = 0;
	}
	void Input1()
	{
		Worker::Input();
		cout << "increase: "; cin >> increase;
		cin.ignore();
	};
	void Output1()
	{
		Worker::Output();
		cout << increase << endl;
		cout << newSalary << endl;
	}
	void IncreasingSalary()
	{
		newSalary = (get_salary()*(increase / 100)) + get_salary();
	}
	Worker::get_position;
	Worker::get_name;
	void SamePosition()
	{
		cout << get_name() << endl;
	}
};

int main()
{
	Worker workers[3];
	PaidWorker PaidWorkers[3];
	string Position;

	for (int i = 0; i < 3; i++)
	{
		cout << "#worker" << i + 1 << ":" << endl;
		PaidWorkers[i].Input1();
		PaidWorkers[i].IncreasingSalary();
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "#worker" << i + 1 << ":" << endl;
		PaidWorkers[i].Output1();
		cout << endl;
	}


	cout << "Position: "; cin >> Position;
	for (int i = 0; i < 3; i++)
	{
		if(PaidWorkers[i].get_position()==Position)
		PaidWorkers[i].SamePosition();
	}
	return 0;
}

