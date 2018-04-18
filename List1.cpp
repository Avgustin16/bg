#include<iostream>
using namespace std;

int main()
{
	int A[10];
	int command;
	int i,n=0;
	while(command!=3)
	{
		if(n>0)
		{
			for(i=0;i<n;i++)
			{
				cout<<A[i]<<" ";
			}
			cout<<endl;
		}
		else cout<<"empty"<<endl;
		cout<<endl;
		cout<<"Menu"<<endl;
		cout<<"1. Dobaviane"<<endl;
		cout<<"2. Premahvane"<<endl;
		cout<<"3. End"<<endl;
		cout<<"command:";cin>>command;
		if(command==1)
		{
			if(n<10)
			{
				n++;
				cout<<"Elementi: ";
				cin>>A[n-1];
			}
			else cout<<"full";
		}
		if(command==2)
		{
			if(n>0)
			{
				for(i=0;i<n;i++)
				{
					A[i]=A[i+1];	
				}
				n--;
			}
			else cout<<"empty"<<endl;
		}
		
	}
	return 0;
}

