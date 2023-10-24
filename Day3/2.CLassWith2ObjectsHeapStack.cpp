/*
create a class with constructors and destructor.
create 2 instances on stack and 1 instance on heap. observe the invocation of constructors and destructors.
*/

#include <iostream>
using namespace std;
#include<string.h>

class Student
{
    int id;
    char name[20];
public:
    Student(char name[20],int id)
    {
        strcpy_s(this->name,name);
        this->id = id;
    }
    ~Student()
    {

        cout << "inside destructur " <<id<< endl;
    }
    void disp()
    {
        cout << name << "\t" << id << endl;
    }
};



int main()
{
    char n[20] = "Sachin";
    char m[20] = "Raghav";
    Student s1(n,20);
    Student * s2 = new Student(m,40);
    s1.disp();
    s2->disp();
    delete s2;
    
}

