#include<iostream>
using namespace std;

int n,P[7],j;char C[7];

void Print()
{
	for(int i=1;i<=n;i++)
	{
		if(i==n)
		{
			cout<<C[P[i]];
			continue;
		}	
		cout<<C[P[i]]<<" , ";
	}
	cout<<endl;
}

void Permutacii(int k)
{
	for(int i=1;i<=n;i++)
	{
		P[k]=i;
		j=1;
		while(P[j]!=i)
		{
			j++;
		}
		if(j==k)
		{
			if(k<n)
			{
				Permutacii(k+1);
			}
			else 
			{
				Print();
			}
		}
	}
}

int main()
{
	cout<<"n=";
	cin>>n;
	if(n>1 && n<7)
	{
		cout<<"Insert char:";
		for(int i=1;i<=n;i++)
		{
			cin>>C[i];
		}
		Permutacii(1);
	}
	else 
	{
		cout<<"Error!";
	}
	return 0;
}

