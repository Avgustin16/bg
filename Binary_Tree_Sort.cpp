#include<iostream>
#include<ctime>
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

int i=0;
void Output(Tree *V,int Array[])
{
	if(V!=0)
	{
		Output(V->left,Array);
		Array[i]=V->info;i++;
		Output(V->right,Array);
	}
}

int main()
{
	int n;
	cout<<"2<n<=10/n:";cin>>n;
	if(n<2 || n>10)
	{
		cout<<"Error";
		return 0;
	}
	
	int Array[10];
	srand(time(0));
	for(int i=0;i<n;i++)
	{
		Array[i]=rand()%100-50;	
		cout<<Array[i]<<" ";   
	}
	cout<<endl<<endl;
	
	first=new Tree;
	first->info=Array[0];
	first->left=0;
	first->right=0;
	
	
	for(int i=1;i<n;i++)
	{Insert(first,Array[i]);}	
	
	Output(first,Array);
	for(int i=0;i<n;i++)
	{
		cout<<Array[i]<<" ";
	}
	return 0;
}

