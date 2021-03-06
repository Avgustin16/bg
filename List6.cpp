// List6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

struct Node
{
	int number;
	Node *next;
};

class Queue
{
private:
	Node *first;
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
		int num;
		cout << "Enter number:";
		cin >> num;
		element->number = num;
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

	void search(int number)
	{
		bool isFound = false;
		Node *el = first;
		while (el != NULL)
		{
			if (el->number == number)
			{
				cout << "Element found" << endl;
				isFound = true;
				//
				Node *element = new Node;
				int num;
				cout << "Add new number: ";
				cin >> num;
				element->number = num;
				element->next = el->next;
				el->next = element;
				//
				break;
			}
			el = el->next;
		}

		if (!isFound)
		{
			cout << "Element not found" << endl;
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
			cout << "Queue: ";
			while (element != NULL)
			{
				cout << element-> number << " ";
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
		cout << "1-add, 2-search_and_add, 3-exit" << endl;
		cout << "Input command: ";
		cin >> commandNumber;
		if (commandNumber == 1)
		{
			q.add();
			q.OutputQueue();
			cout << "-------------------------" << endl;
		}
		else if (commandNumber == 2)
		{
			int number;
			cout << "Input number for search: ";
			cin >> number;
			q.search(number);
			q.OutputQueue();
			cout << "-------------------------" << endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}

