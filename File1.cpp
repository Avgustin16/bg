#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string name;
	double averageGrade;
	int choice=1;
	fstream file;
	while(choice==1 || choice==2 || choice==3)
	{
		cout<<"MENU"<<endl;
		cout<<"1.New file"<<endl;
		cout<<"2. Append file"<<endl;
		cout<<"3. Print file"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Input choice: ";
		cin>>choice;
		if(choice==1)
		{
			file.open("Student.txt", ios::out);
			file.close();
		}
		if(choice==2)
		{
			file.open("Student.txt", ios::app|ios::out);
			cout<<"name: ";cin>>name;
			cout<<"averageGrade: ";cin>>averageGrade;
			file<<averageGrade<<" "<<name<<endl;
			file.close();
			
		}
		if(choice==3)
		{
			file.open("Student.txt", ios::in);
			while(!file.eof())
			{
				file>>averageGrade>>name;
				if(!file.eof())
				{
					cout<<name<<" "<<averageGrade<<endl;
				}
			}
			file.close();
		}
		if(choice<1 || choice>4)
		{
			cout<<"Error!";
		}
	}
	return 0;
}

