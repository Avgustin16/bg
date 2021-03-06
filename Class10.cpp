// Class10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class hospital
{
private:
	string name;
	string diagnose;
	int days;
public:
	hospital()
	{
		name = "none";
		diagnose = "none";
		days = 0;
	}
	void Input()
	{
		cout << "name: "; getline(cin, name);
		cout << "diagnose: "; getline(cin, diagnose);
		cout << "days: "; cin >> days;
		cin.ignore();
	}
	string get_name()
	{
		return name;
	}
	string get_diagnose()
	{
		return diagnose;
	}
	double get_days()
	{
		return days;
	}
	void Output()
	{
		cout << name << endl;
		cout << diagnose << endl;
		cout << days << endl;
	}
};

class HospitalData :hospital
{
private:
	string disease;
	int age;
public:
	HospitalData()
	{
		hospital::hospital();
		disease = "none";
		age = 0;
	}
	void Input1()
	{
		hospital::Input();
		cout << "disease: "; getline(cin, disease);
		cout << "age: "; cin >> disease;
		cin.ignore();
	};
	void Output1()
	{
		hospital::Output();
		cout << disease << endl;
		cout << age << endl;
	}
	hospital::get_days;
};

int main()
{
	hospital patients[5];

	/*for (int i = 0; i < 5; i++)
	{
	cout << "car" << i+1 << ":" << endl;
	cars[i].Input();
	cout << endl;
	}*/

	HospitalData Patients[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "#patient" << i + 1 << ":" << endl;
		Patients[i].Input1();
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "#patient" << i + 1 << ":" << endl;
		Patients[i].Output1();
		cout << endl;
	}

	double min_days = Patients[0].get_days();
	int min_index = 0;
	for (int i = 1; i < 5; i++)
	{
		if (Patients[i].get_days() < min_days)
		{
			min_days = Patients[i].get_days();
			min_index = i;
		}
	}
	cout << "patient with min days in hospital: patient" << min_index + 1 << endl;
	Patients[min_index].Output1();

	return 0;
}