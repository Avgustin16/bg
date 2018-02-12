#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct koordinati
{
	int x;
	int y;
	int z;
}

int main()
{
	int n;
	cout<<n;
	koordinati Arr[10];
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i].x;
		cin>>Arr[i].y;
	}
	for(int i=0;i<n;i++)
	{
		Arr[i].z=sqrt(pow(2,Arr[i].x)+pow(2,Arr[i].y));
	}
	int minZ=Arr[0].z;
	bool hasSorted = true;
	do 
	{
		hasSorted = false;
		for(int i = 1; i < n; i++)
		{
			if(Arr[i].z > Arr[i+1].z)
			{
				char temp = Arr[i].z;
				Arr[i].z = Arr[i + 1].z;
				Arr[i+1].z = temp;
				hasSorted = true;
			}
		} 
	}while(hasSorted);
	
	
	return 0;
}

