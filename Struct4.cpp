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
	double age;
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
		//cin >> Arr[i].lastName;
		cin >> Arr[i].age;
		cin >> Arr[i].coefficient;
	}
	cout << endl;
	int max, integer, Max[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, isValid=true;
	for (int i = 0; i < 5; i++)
	{
		max = Arr[0].coefficient;
		integer = 0;
		if (!isValid)
		{
			max = -1;
		}
		for (int k = 1; k < n; k++)
		{
			if (Arr[k].coefficient == Max[k])
			{
				continue;
			}
			else if (Arr[k].coefficient >= max)
			{
				max = Arr[k].coefficient;
				integer = k;
			}
		}
		Max[integer] = Arr[integer].coefficient;
		cout << Arr[integer].firstName << "-" << Arr[integer].coefficient << endl;
		if (Arr[0].coefficient == Max[0])
		{
			isValid = false;
		}	
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i].firstName << "-";
		cout << 23 - Arr[i].age << endl;
	}
    return 0;
}

