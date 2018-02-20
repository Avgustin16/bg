// Class2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class flower
{
private:
	string name;
	int count;
	double price;
	double total;
public:
	flower()
	{
		name = "";
		count = 0;
		price = 0;
		total = 0;
	}
	void set_name(string flower_name)
	{
		name = flower_name;
	}
	string get_name()
	{
		return name;
	}
	void set_count(int flower_count)
	{
		count = flower_count;
	}
	int get_count()
	{
		return count;
	}
	void set_price(double flower_price)
	{
		price = flower_price;
	}
	double get_price()
	{
		return price;
	}
	void set_total(double flower_total)
	{
		total = flower_total;
	}
	double get_total()
	{
		return total;
	}
};

flower Input_Change_Data(string Name, int Count, double Price, double Total)
{
	flower flower;
	cout << "name: ";
	cin >> Name;
	flower.set_name(Name);
	cout << "count: ";
	cin >> Count;
	flower.set_count(Count);
	cout << "price: ";
	cin >> Price;
	flower.set_price(Price);
	cout << "total: ";
	Total = Price*Count;
	flower.set_total(Total);
	cout << flower.get_total();
	cout << endl << endl;
	return flower;
}

int main()
{
	string Name;
	int Count=0;
	double Price=0;
	double Total=0;
	flower flower1, flower2;
	flower1 = Input_Change_Data(Name, Count, Price, Total);
	flower2 = Input_Change_Data(Name, Count, Price, Total);
	if (flower1.get_total() > flower2.get_total())
	{
		cout << flower1.get_name() << endl;
	}
	else if (flower1.get_total() < flower2.get_total())
	{
		cout << flower2.get_name() << endl;
	}
	else
	{
		cout << flower1.get_name() << endl;
		cout << flower2.get_name() << endl;
	}
	return 0;
}

