// CinCout.cpp : Defines the functions for the static library.
//


#include <iostream>
using namespace std;


// TODO: This is an example of a library function
int main()
{
	Displ();
}
void Displ()
{
	string n, a;;int age;
	cout << "Enter the Name" << endl;
	cin >> n;
	cout << "Enter the age" << endl;
	cin >> age;
	cout << "Enter the address" << endl;
	cin >> a;
	cout << "Name = " << n << " age = " << age << " addres " << a<<endl;

}
