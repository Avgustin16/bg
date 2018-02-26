#include<iostream>
#include<string>
using namespace std;

class book
{
private:
	string title;
	int year;
public:
	book();
	void Input();
	string Get_title()
	{
		return title;
	}
	int Get_year()
	{
		return year;
	}
};

book::book()
{
	title="";
	year=0;
}

void book::Input()
{
	cout<<"title: ";cin>>title;
	cout<<"year: ";cin>>year;
	cout<<endl;
}

int main()
{
	book book[3];
	for(int i=0;i<3;i++)
	{
		book[i].Input();
	}
	int integer=0;
	for(int i=1;i<3;i++)
	{
		if(book[i].Get_year()<book[i-1].Get_year())
		{
			integer=i;
		}
	}
	cout<<book[integer].Get_title()<<endl;
	return 0;
}

