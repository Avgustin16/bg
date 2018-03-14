#include<iostream>
#include<fstream>
#include<string>
using namespace std;

fstream file;

class Firma
{
private:
	string name;
	string egn;
	string position;
	double salary;
public:
	Firma(){};
	void setData()
	{
		getline(file,name);
		getline(file,egn);
		getline(file,position);
		file>>salary;
		file.ignore();
	};
	double getSalary()
	{
		return salary;
	};
	string getName()
	{
		return name;
	};
	void printData()
	{
		cout<<name<<endl;
		cout<<egn<<endl;
		cout<<position<<endl;
		cout<<salary<<endl;
		cout<<endl<<endl;
	};
}

int main()
{
	Firma employee[5];
	file.open("TextForClass5.txt", ios::in);
	for(int i=0;i<5;i++)
	{
		employees[i].setData();
		if(employee[i].getSalary()>700)
		{
			cout<<employees[i].getName()<<endl;
		}
	}
	file.close();
	
	cout<<"----------------------"<<endl;
	
	Firma buf;
	for(int i=1;i<=4;i++)
	{
		for(int k=0;k<4;k++)
		{
			if(employees[k].getSalary()<employees[k+1].getSalary())
			{
				buf=employees[k];
				employees[k]=employees[k+1];
				employees[k+1]=buf;
			}
		}
	}
	return 0;
}

