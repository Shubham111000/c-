/*
5.create a class, define different types of constructors. in main create n number of objects. 
At the end display how many constructors are created for a class.5.
*/

#include <iostream>
using namespace std;
class Employee 
{
    static int cnt;
    int id;
    int age;
    double year_of_experice;
public:
    Employee()
    {
        id = 100;
        age = 24;
        year_of_experice = 0;
        cout << "inside the parameter less constructor" << endl;
        cnt++;
    }
    Employee(int id,int age,int yrs)
    {
        this->id = id;
        this->age = age;
        this->year_of_experice = yrs;
        cout << "inside parameterised constructor" << endl;
        cnt++;
    }
    ~Employee()
    {
        cout << "inside destructoer " << id << endl;
        cnt--;

    }
    void static Disp() 
    {
        cout << cnt<<endl;

    }
};
int Employee::cnt = 0;


int main()
{
    Employee e1;
    Employee e2(10, 20, 30);
    Employee e3 = e1;
    Employee e4 = e2;
    Employee e5;
    Employee e6(10, 25, 36);
    Employee::Disp();
    {
        Employee e8;
        Employee::Disp();
    }
    Employee::Disp();
    Employee A1;
    Employee::Disp();
    
}

