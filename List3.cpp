#include<iostream>
using namespace std;

struct List
{
	int key;
	List *next;
};

List *first,*last;

void Input()
{
	List *queue;
	queue = new List;
	cout<<"Input number: ";
	cin>>queue->key;
	queue->next=NULL;
	if(first==NULL)
	{
		first=queue;
		last=queue;
	}
	else 
	{
		last->next=queue;
		last=queue;
	}
}

void Print()
{
	List *queue=first;
	if(queue==NULL)
	{
		cout<<"Not number"<<endl;
	}
	else 
	{
		while(queue!=NULL)
		{
			cout<<queue->key<<" ";
			queue=queue->next;
		}
		cout<<endl;
	}
} 

void Delete()
{
	if(first==NULL)
	{
		cout<<"Not numbers"<<endl;
	}
	else 
	{
		List *queue;
		queue=first;
		//first=first->next;
		delete(queue);
	}
}

int main()
{
	int k=0;
	while(k!=3)
	{
		Print();
		cout<<"------------"<<endl;
		cout<<"menu"<<endl;
		cout<<"1.Insert"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.End"<<endl;
		cout<<"k->";cin>>k;
		if(k==1) Input();
		if(k==2) Delete();
	}
	return 0;
}

