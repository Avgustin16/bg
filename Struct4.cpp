// Struct4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

struct competitors
{
	string firstName;
	//string lastName;
	//int age;
	int coefficient;
};

int main()
{
	int n;
	cin >> n;
	competitors Arr[10];
	for (int i = 0; i < n; i++)
	{
		cin >> Arr[i].firstName;
		//cin >> Arr[0].lastName;
		//cin >> Arr[0].age;
		cin >> Arr[i].coefficient;
	}
	cout << endl;
	int max, integer;
	for (int i = 0; i < 5; i++)
	{
		max = Arr[0].coefficient;
		integer = 0;
		for (int k = 1; k < n; k++)
		{
			if (Arr[k].coefficient > max)
			{
				max = Arr[k].coefficient;
				integer = k;
			}
		}
		cout << Arr[integer].firstName << "-" << Arr[integer].coefficient << endl;
		Arr[integer].coefficient = -1;
	}
    return 0;
}

