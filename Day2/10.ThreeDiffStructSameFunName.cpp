/*
10)define 3 different structures and initialize their members.
now write 3 different functions,but with the same name.
these functions will accept each structure respectively and display their members.      **
*/

#include<iostream>
using namespace std;

struct Student
{
	char name[20];
	int age;
};
struct Employee
{
	char e_name[20];
	int e_age;
};
struct Company
{
	char c_name[20];
	char location[20];
};

void disp(Student temp);
void disp(Employee* temp);
void disp(Company& temp);

int main()
{
	Student s1;
	strcpy_s(s1.name, "Shubham");
	s1.age = 24;
	Employee e1;
	strcpy_s(e1.e_name, "Ganesh");
	e1.e_age = 26;
	Employee* ptr = &e1;
	Company c1;
	strcpy_s(c1.c_name, "TCS");
	strcpy_s(c1.location, "Mumbai");
	Company& ref = c1;
	

	

	disp(s1);
	disp(ptr);
	disp(c1);

}

void disp(Student temp)
{
	cout << temp.name<<"\n" << temp.age<<endl;
}
void disp(Employee *temp)
{
	cout << (*temp).e_name << "\n" << (*temp).e_age << endl;
}
void disp(Company &temp)
{
	cout << temp.c_name <<"\n" << temp.location;
}
