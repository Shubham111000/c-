/*
4) create a class.
accept from user, how many instances are required.
Accordingly create array of instances dynamically.
Now make sure that u call destructor for each and every instances.
*/

#include <iostream>
using namespace std;
class Student
{
    int id;
    int age;
public:
    Student()
    {
        cout << "inside consturctor" << endl;
    }
    ~Student() 
    {
        cout << "inside desturctor" << endl;
    }
};

int main()
{
    int req;
    cout << "enter how many students are there" << endl;
    cin >> req;
    Student* ptr = new Student[req];
    delete []ptr;
    
}
