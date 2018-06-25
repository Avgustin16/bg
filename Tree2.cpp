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

void Search(Tree *V,int elementToFind)
{
	bool isFound=false;
	if(V!=0)
	{
		Search(V->left,elementToFind);
		if(elementToFind==V->info)
		{
			cout<<"Element found";
			isFound=true;
		}
		Search(V->right,elementToFind);
	}
	if(isFound=false)
	{
		cout<<"Element not found";
	}	  	     
}

int main()
{
	int elementToFind;
	first=new Tree;
	Create(first);
	cout<<endl;
	cout<<"element to search: ";
	cin>>elementToFind;
	Search(first,elementToFind);	 
	return 0;
}

