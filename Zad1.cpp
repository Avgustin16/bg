// Zad1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

struct Node
{
	string name;
	int аge;
	double weight;
	Node *next;
};

class Queue
{
private:
	Node * first;
	Node *last;
public:
	Queue()
	{
		first = NULL;
		last = NULL;
	}
	bool isEmpty()
	{
		return first == NULL;
	}
	void add()
	{
		Node *element = new Node;
		string Name;
		int Age;
		double Weight;
		cout << "Enter name: ";
		cin >> Name;
		cout << "Enter age: ";
		cin >> Age;
		cout << "Enter weight: ";
		cin >> Weight;
		element->name = Name;
		element->аge = Age;
		element->weight = Weight;
		element->next = NULL;

		if (first == NULL)
		{
			first = element;
			last = element;
		}
		else
		{
			last->next = element;
			last = element;
		}
	}
	void OutputQueue()
	{
		Node *element = first;
		if (isEmpty())
		{
			cout << "Queue is empty" << endl;
		}
		else
		{
			while (element != NULL)
			{
				cout << element->name << " ; ";
				cout << element->аge << " ; ";
				cout << element->weight << endl;
				element = element->next;
			}
			cout << endl;
		}
	}
};

int main()
{
	int commandNumber = 0;
	Queue q;
	while (true)
	{
		cout << "1-add, 2-output, 3-end" << endl;
		cin >> commandNumber;
		if (commandNumber == 1)
		{
			q.add();
		}
		else if (commandNumber == 2)
		{
			q.OutputQueue();
		}	
		else
		{
			break;
		}
	}
	return 0;
}
