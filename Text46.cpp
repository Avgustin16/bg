// Text46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Nod(int firstNumber, int secondNumber)
{
	int NOD;
	if (firstNumber > secondNumber)
	{
		NOD = secondNumber;
	}
	else
	{
		NOD = firstNumber;
	}
	while (!((firstNumber%NOD == 0 && secondNumber%NOD == 0) || NOD == 0))
	{
		NOD--;
	}
	return NOD;
}

int main()
{
	int a, b, c, d, A;
	cin >> a >> b >> c >> d;
	A=Nod(a, b)+2*Nod(c,d);
	cout << A << endl;
    return 0;
}

