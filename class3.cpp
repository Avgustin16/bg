#include<iostream>
#include<string>
using namespace std;

class student
{
private:
	string name;
	double averageGrade;
public:
	student();
	void Input();
	string Get_name()
	{
		return name;
	}
	double Get_averageGrade()
	{
		return averageGrade;
	}
};

student::student()
{
	name="";
	averageGrade=0;
}

void student::Input()
{
	cout<<"name: ";cin>>name;
	cout<<"averageGrade: ";cin>>averageGrade;
	cout<<endl;
}

int main()
{
	student student1, student2;
	student1.Input();
	student2.Input();
	if(student1.Get_averageGrade()>student2.Get_averageGrade())
	{
		cout<<student1.Get_name()<<endl;
	}
	else if(student1.Get_averageGrade()<student2.Get_averageGrade())
	{
		cout<<student2.Get_name()<<endl;
	}
	else 
	{
		cout<<student1.Get_name()<<endl;
		cout<<student2.Get_name()<<endl;
	}
	return 0;
}

