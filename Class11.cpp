#include<iostream>
#include<string>
using namespace std;

class Worker
{
private:
	string name;
	string position;
	int salary;
public:
	Worker()
	{
		name = "none";
		position = "none";
		salary = 0;
	}
	void Input()
	{
		cout << "name: "; getline(cin, name);
		cout << "position: "; getline(cin, position);
		cout << "salary: "; cin >> salary;
		cin.ignore();
	}
	string get_name()
	{
		return name;
	}
	string get_position()
	{
		return position;
	}
	double get_salary()
	{
		return salary;
	}
	void Output()
	{
		cout << name << endl;
		cout << position << endl;
		cout << salary << endl;
	}
};

class PaidWorker :Worker
{
private:
	int increase;
	double newSalary;
public:
	PaidWorker()
	{
		Worker::Worker();
		increase = 0;
		newSalary = 0;
	}
	void Input1()
	{
		Worker::Input();
		cout << "increase: "; cin>>increase;
		cin.ignore();
	};
	void Output1()
	{
		Worker::Output();
		cout << increase << endl;
		cout << newSalary << endl;
	}
	void IncreasingSalary()
	{
		newSalary=(get_salary()*(increase/100)) + get_salary();
	}
	Worker::get_position;
};

int main()
{
	Worker workers[2];
	PaidWorker PaidWorkers[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "#worker" << i + 1 << ":" << endl;
		PaidWorkers[i].Input1();
		PaidWorkers[i].IncreasingSalary();
		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << "#worker" << i+1 << ":" << endl;
		PaidWorkers[i].Output1();
		cout << endl;
	}
	return 0;
}

//raboti na 100%, ne raboti na 50%
//probvai salary da e ot tip salary

