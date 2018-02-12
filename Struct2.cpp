#include<iostream>
#include<string>
using namespace std;

int main()
{
	struct book
	{
		string title;
		int year;
	};
	book book1,book2,book3;
	cout << "book1:";
	cin >> book1.title;
	cin >> book1.year;
	cout << "book2:";
	cin >> book2.title;
	cin >> book2.year;
	cout << "book3:";
	cin >> book3.title;
	cin >> book3.year;
	int min=book1.year;
	string nameMin=book1.title;
	if(book2.year<min)
	{
		min=book2.year;
		nameMin=book2.title;
	}
	else if(book3.year<min)
	{
		min=book3.year;
		nameMin=book3.title;
	}
	cout<<endl;
	cout<<nameMin;
	return 0;
}

