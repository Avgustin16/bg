// Struct1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	struct student
	{
		string name;
		double averageGrade;
	};
	student student1, student2;
	cout << "student1:";
	cin >> student1.name;
	cin >> student1.averageGrade;
	cout << "student2:";
	cin >> student2.name;
	cin >> student2.averageGrade;
	if (student1.averageGrade > student2.averageGrade)
	{
		cout << student1.name<<endl;
	}
	else if(student1.averageGrade < student2.averageGrade)
	{
		cout << student2.name<<endl;
	}
	else
	{
		cout << student1.name<<endl;
		cout << student2.name<<endl;
	}
    return 0;
}

