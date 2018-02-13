// Struct3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct koordinati
{
	int x;
	int y;
	double z;
};

int main()
{
	int n;
	cin >> n;
	koordinati Arr[10];
	for (int i = 0; i<n; i++)
	{
		cin >> Arr[i].x;
		cin >> Arr[i].y;
	}
	for (int i = 0; i<n; i++)
	{
		Arr[i].z = sqrt(pow(2, Arr[i].x) + pow(2, Arr[i].y));
	}
	bool hasSorted = true;
	do
	{
		hasSorted = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (Arr[i].z > Arr[i + 1].z)
			{
				double temp = Arr[i].z; int temp1 = Arr[i].x; int temp2 = Arr[i].y;
				Arr[i].z = Arr[i + 1].z; Arr[i].x = Arr[i + 1].x; Arr[i].y = Arr[i + 1].y;
				Arr[i + 1].z = temp; Arr[i + 1].x = temp1; Arr[i + 1].y = temp2;
				hasSorted = true;
			}
		}
	} while (hasSorted);
	for (int i = 0; i < n; i++)
	{
		cout << "(" << Arr[i].x << ";" << Arr[i].y << ")" << endl;
	}
	return 0;
}
