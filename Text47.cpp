#include<iostream>
using namespace std;

int n,P[7],j;

void Print()
{
	for(int i=1;i<=n;i++)
	{
		if(i=n)
		{
			cout<<P[i];
			continue;
		}
		cout<<P[i]<<" , ";
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
		Permutacii(1);
	}
	else 
	{
		cout<<"Error!";
	}
	return 0;
}

