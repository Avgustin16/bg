#include<iostream>
#include<string>
using namespace std;

class hospital
{
private:
	string name;
	string diagnose;
	int days;
public:
	hospital()
	{
		name = "none";
		diagnose = "none";
		days = 0;
	}
	void Input()
	{
		cout << "name: "; getline(cin, name);
		cout << "diagnose: "; getline(cin, diagnose);
		cout << "days: "; cin >> days;
		cin.ignore();
	}
	string get_name()
	{
		return name;
	}
	string get_diagnose()
	{
		return diagnose;
	}
	double get_days()
	{
		return days;
	}
	void Output()
	{
		cout << name << endl;
		cout << diagnose << endl;
		cout << days << endl;
	}
};

class HospitalData :hospital
{
private:
	string disease;
	int age;
public:
	HospitalData()
	{
		hospital::hospital();
		disease = "none";
		age = "none";
	}
	void Input1()
	{
		car::Input();
		//cin.ignore();
		cout << "disease: "; getline(cin, disease);
		cout << "age: "; getline(cin, age);
	};
	void Output1()
	{
		hospital::Output();
		cout << disease << endl;
		cout << age << endl;
	}
	car::get_days;
};

int main()
{
	car cars[5];

	/*for (int i = 0; i < 5; i++)

	{

		cout << "car" << i+1 << ":" << endl;

		cars[i].Input();

		cout << endl;

	}*/

	CarName Cars[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "#car" << i + 1 << ":" << endl;
		Cars[i].Input1();
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "#car" << i+1 << ":" << endl;
		Cars[i].Output1();
		cout << endl;
	}

	double max_mileage = Cars[0].get_mileage();
	int max_index = 0;
	for (int i = 1; i < 5; i++)
	{
		if (Cars[i].get_mileage() > max_mileage)
		{
			max_mileage =Cars[i].get_mileage();
			max_index = i;
		}
	}
	cout << "car with max mileage: car" << max_index + 1 << endl;
	Cars[max_index].Output1();

	return 0;
}

