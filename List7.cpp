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

	void Sort()
	{
		bool hasSorted=false;
		Node *el=first;
		while(!hasSorted)
		{
			hasSorted=true;
			el=first;
			while(el->next!=NULL)
			{
				if(el->number > el->next->number)
				{
					int temp=el->number;
					el->number=el->next->number;
					el->next->number=temp;
					hasSorted=false;
				}	 
				el=el->next;
			}
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
		cout << "1-add, 2-sort, 3-exit" << endl;
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
			q.Sort();
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

