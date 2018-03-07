#include <iostream>
#include <fstream> 
using namespace std; 
class Employee
{
    private:
    string name;
    string id;
    string position;
    double salary;
    public:
    Employee(string n, string i, string p, double s)
    {
        name = n;
        id = i;
        position = p;
        salary = s;         
    }
    Employee()
    {
        name = "";
        id = "0";
        position = "none";
        salary = 0;
    }
    string get_name()
    {
        return name;
    }
    string get_id()
    {
        return id;
    }
    string get_position()
    {
        return position;
    }
    double get_salary()
    {
        return salary;
    }
};

int main()
{
    ifstream file;
    file.open("Bussiness.txt");
    Employee e; 
    //Employee workers[3];
    for(int i = 0; i < 3; i++)
    {
        string name;
        string id;
        string pos;
        double salary;
        file>>name;
        file>>id;
        file>>pos;
        file>>salary;
        if(salary < 700)
        {
            continue;
        }
        e = Employee(name, id, pos, salary);
        //workers[i] = e;
        cout<<e.get_name()<<" ";
        cout<<e.get_salary()<<" ";
		cout<<endl;
    }
    file.close();
    return 0;
}

