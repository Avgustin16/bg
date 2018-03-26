#include<iostream>
#include<string>
using namespace std;

class car
{
private:
	string brand;
	string colour;
	string rgn_num;
	double mileage;
public:
	/*car(string b, string c, string r, double m)
	{
		brand = b;
		colour = c;
		rgn_num = r;
		mileage = m;
	}*/

	car()
	{
		brand = "none";
		colour = "none";
		rgn_num = "none";
		mileage = 0;
	}
	void Input()
	{
		cout << "brand: "; getline(cin, brand);
		cout << "colour: "; getline(cin, colour);
		cout << "rgn_num: "; getline(cin, rgn_num);
		cout << "mileage: "; cin >> mileage;
		cin.ignore();
	}
	string get_brand()
	{
		return brand;
	}
	string get_colour()
	{
		return colour;
	}
	string get_rgn_num()
	{
		return rgn_num;
	}
	double get_mileage()
	{
		return mileage;
	}
	void Output()
	{
		cout << brand << endl;
		cout << colour << endl;
		cout << rgn_num << endl;
		cout << mileage << endl;
	}
};

class CarName :car
{
private:
	string owner;
	string city_of_rgn;
public:
	CarName()
	{
		car::car();
		owner = "none";
		city_of_rgn = "none";
	}
	void Input1()
	{
		car::Input();
		//cin.ignore();
		cout << "owner: "; getline(cin, owner);
		cout << "city_of_rgn: "; getline(cin, city_of_rgn);
	};
	void Output1()
	{
		car::Output();
		cout << owner << endl;
		cout << city_of_rgn << endl;
	}
	car::get_mileage;
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

