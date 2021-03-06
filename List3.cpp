// List3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
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

	void enqueue()
	{
		int value;
		Node *element = new Node();
		cout << "Please enter a number:";
		cin >> value;
		element->data = value;
		element->next = NULL;

		if (isEmpty())
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

	void dequeue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty" << endl;
			return;
		}

		Node *elementToRemove = first;
		first = first->next;
		//cout << elementToRemove->data << endl;
		delete(elementToRemove);
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
				cout << element->data << " ";
				element = element->next;
			}
			cout << endl;
		}
	}
};


int main()
{
	Queue queue;
	int commandNumber = 0;
	while (true)
	{
		queue.OutputQueue();
		cout << "------------" << endl;
		cout << "Please enter command: 1-add, 2-remove, 3-Goodbye :)" << endl;
		cin >> commandNumber;
		if (commandNumber == 1)
		{
			queue.enqueue();
			cout << "------------" << endl;
		}
		else if (commandNumber == 2)
		{
			queue.dequeue();
			cout << "------------" << endl;
		}
		else if (commandNumber == 3)
		{
			cout << "Goodbye" << endl;
			cout << "------------" << endl;
			break;
		}
		else
		{
			cout << "Invalid command! Please try again." << endl;
			cout << "------------" << endl;
		}
	}
	return 0;
}

