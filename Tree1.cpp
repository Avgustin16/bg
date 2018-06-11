#include<iostream>
using namespace std;

struct Tree
{
	int info;
	Tree *left;
	Tree *right;
}*first,*x;
char c;

void Create(Tree *v)
{
	cout<<"info: ";
	cin>>v->info;
	
	//left...
	cout<<v->info<<"->left(yes/no)? ";
	cin>>c;
	if(c=='y')
	{
		x=new Tree;
		v->left=x;
		Create(x);
	}
	else 
	{
		v->left=NULL;
	}
	
	//right...
	cout<<v->info<<"-> right(yes/no)? ";
	cin>>c;
	if(c=='y')
	{
		x=new Tree;
		v->right=x;
		Create(x);
	}
	else v->right=NULL;
}

void Print(Tree *v, int n)
{
	if(v!=NULL)
	{
		Print(v->right, n+1);
		for(int i=1;i<=n*2;i++)
		{
			cout<<" ";
		}
		cout<<v->info<<endl;
		Print(v->left,n+1);
	}
}

int main()
{
	first=new Tree;
	Create(first);
	Print(first,1);
}

