#include<iostream>
#include<string>
using namespace std;

class Grajdanin
{
private:
	string name;
	string egn;
public:
	Grajdanin(){};
	void Read()
	{
		cin>>name;
		cin>>egn;
	};
	string getName()
	{
		return name;
	};
	string getEGN()
	{
		return egn;
	};
	void Print()
	{
		cout<<name<<endl;
		cout<<egn<<endl;
	};
};

class Student:Grajdanin
{
private:
	string klas;
	double averageGrade;
public:
	Student();
	void Read();
	void Print();
};

Student::Student()
{
	Grajdanin::Grajdanin();
	klas=" ";
	averageGrade=0;
}

void Student::Read()
{
	Grajdanin::Read();
	cin.ignore();
	cout<<"class: ";getline(cin,klas);
	cout<<"averageGrade: ";cin>>averageGrade;
}

void Student::Print()
{
	Grajdanin::Print();
	cout<<klas<<" class ; "<<averageGrade<<endl;
}

class Teacher:Grajdanin
{
private:
	string specialnost;
	double staj;
public:
	Teacher();
	void Read();
	void Print();
};

Teacher::Teacher()
{
	Grajdanin::Grajdanin();
	specialnost=" ";
	staj=0;
}

void Teacher::Read()
{
	Grajdanin::Read();
	cin.ignore();
	cout<<"specialnost: ";getline(cin,specialnost);
	cout<<"staj: ";cin>>staj;
}

void Teacher::Print()
{
	Grajdanin::Print();
	cout<<specialnost<<" ; "<<staj<<endl;
}

int main()
{
	Grajdanin grajdanin1;
	grajdanin1.Read();
	cout<<endl;
	Student grajdanin2;
	grajdanin2.Read();
	cout<<endl;
	Teacher grajdanin3;
	grajdanin3.Read();
	cout<<endl;
	
	grajdanin1.Print();
	cout<<endl;
	grajdanin2.Print();
	cout<<endl;
	grajdanin3.Print();
	cout<<endl;
	return 0;
}

