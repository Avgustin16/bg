// List5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

struct Node
{
	string name;
	int flowerCount;
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
	void add()
	{
		Node *element = new Node;
		string fName;
		int count;
		cout << "Enter flower name:";
		cin >> fName;
		cout << "Enter flower count:";
		cin >> count;
		element->name = fName;
		element->flowerCount = count;
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

	void search(string name)
	{
		bool isFound = false;
		Node *el = first;
		while (el != NULL)
		{
			if (el->name == name)
			{
				cout << "Element found" << endl;
				isFound = true;
				break;
			}
			el = el->next;
		}

		if (!isFound)
		{
			cout << "Element not found" << endl;
		}
	}

	void search_name_count(string name)
	{
		Node *el = first;
		while (el != NULL)
		{
			if (el->name == name)
			{
				cout << el->flowerCount << endl;
				break;
			}
			el = el->next;
		}
	}

	void search_count_name(int count)
	{
		Node *el = first;
		while (el != NULL)
		{
			if (el->flowerCount == count)
			{
				cout << el->name << endl;
				break;
			}
			el = el->next;
		}
	}

};

int main()
{
	int commandNumber = 0;
	Queue q;
	while (true)
	{
		cout << "1-add, 2-search, 3-search_name_to_count, 4-search_count_to_name, 5-exit" << endl;
		cin >> commandNumber;
		if (commandNumber == 1)
		{
			q.add();
		}
		else if (commandNumber == 2)
		{
			string name;
			cin >> name;
			q.search(name);
		}
		else if (commandNumber == 3)
		{
			string name;
			cin >> name;
			q.search_name_count(name);
		}
		else if (commandNumber == 4)
		{
			int count;
			cin >> count;
			q.search_count_name(count);
		}
		else
		{
			break;
		}
	}
    return 0;
}

