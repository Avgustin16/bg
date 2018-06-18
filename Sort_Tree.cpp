#include<iostream>
using namespace std;

struct Tree
{
	int info;
	Tree *left;
	Tree *right;
}*first,*x;

void Insert(Tree *V, int a)
{
	x=new Tree;
	x->info=a;
	x->left=0;
	x->right=0;
	if(V!=0)
	{
		if(a<=V->info)
		{
			if(V->left==0)
			{
				V->left=x;
			}
			else 
			{
				Insert(V->left,a);
			}
		}
		else 
		{
			if(V->right==0) 
			{
				V->right=x;
			}
			else 
			{
				Insert(V->right,a);
			}
		}
	}
}

void Output(Tree *V)
{
	if(V!=0)
	{
		Output(V->left);
		cout<<V->info<<" ";
		Output(V->right);
	}
}

int main()
{
	int n;
	cout<<"n>2/n:";cin>>n;
	if(n<=2)
	{
		cout<<"Error";
		return 0;
	}
	
	first=new Tree;
	cout<<"number: ";
	cin>>first->info;
	first->left=0;
	first->right=0;
	
	int v;
	for(int i=2;i<=n;i++)
	{
		cout<<"number: ";cin>>v;
		if(i==1)
		{first==x;}
		else 
		{Insert(first,v);}
	}
	Output(first);
	return 0;
}

