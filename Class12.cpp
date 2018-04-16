#include<iostream>
#include<string>
using namespace std;

class Personal
{
private:
	string name;
	int age;
public:
	Personal()
	{
		name = "none";
		age = 0;
	}
	void Input()
	{
		cout << "name: "; getline(cin, name);
		cout << "age: "; cin >> age;
		cin.ignore();
	}
	void Output()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

class Data
{
private:
	int weight;
	int height;
public:
	Data()
	{
		weight = 0;
		height = 0;
	}
	void Input()
	{
		cout << "weight: "; cin>>weight;
		cout << "height: "; cin >> height;
		cin.ignore();
	}
	void Output()
	{
		cout << weight << endl;
		cout << height << endl;
	}
};

class Child :Personal, Data
{
private:
	int group;
public:
	Child()
	{
		group = 0;
	}
	void Input()
	{
		Personal::Input();
		Data::Input();
		cout << "group: "; cin >> group;
		cin.ignore();
	};
	void Output()
	{
		Personal::Output();
		Data::Output();
		cout << group << endl;
	}
};

int main()
{
	Child child[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "#child" << i + 1 << ":" << endl;
		child[i].Input();
		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << "#child" << i + 1 << ":" << endl;
		child[i].Output();
		cout << endl;
	}
	
	return 0;
}

