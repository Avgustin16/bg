// Struct5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

struct flower
{
	string name;
	int count;
	double price;
	double total;
};

flower Input_Change_Data()
{
	flower flower;
	cout << "name: ";
	cin >> flower.name;
	cout << "count: ";
	cin >> flower.count;
	cout << "price: ";
	cin >> flower.price;
	flower.total = flower.count*flower.price;
	cout << "total: " << flower.total;
	cout << endl <<endl;
	return flower;
}

int main()
{
	flower flower1, flower2;
	flower1 = Input_Change_Data();
	flower2 = Input_Change_Data();
	if (flower1.total > flower2.total)
	{
		cout << flower1.name<<endl;
	}
	else if (flower1.total < flower2.total)
	{
		cout << flower2.name<<endl;
	}
	else
	{
		cout << flower1.name<<endl;
		cout << flower2.name << endl;
	}
    return 0;
}

