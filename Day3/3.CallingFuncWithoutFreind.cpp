/*
3)create a class "MyClass1"
with members and member function "disp1().
create another class "MyClass2"
with members and member function "disp2().
now try to invoke disp1() from disp2()
in the main() function, create instances of both the classes and invoke their member functions.
*/
#include<iostream>
using namespace std;

class MyClass1
{
public:
	void disp1()
	{
		cout << "disp1" << endl;
	}

};
class MyClass2
{
public:
	void disp2(MyClass1& ref)
	{
		cout << "disp2" << endl;
		ref.disp1();
	}

};
int main()
{
	MyClass2 m2;
	MyClass1 m1;
	m2.disp2(m1);
}








