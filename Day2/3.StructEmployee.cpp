/*

3) create a structure "Employee"
with members
	int id
	char name[20];
	char desig[20];
now access it using
a) array
b) DMA

*/

#include <iostream>
using namespace std;
#include<string.h>
#include <string>

struct Employee
{
	int Id;
	char Name[20];
	char Design[20];
};

int main()
{
	int req;
	cout << "enter the req" << endl;
	cin >> req;
	Employee* ptr = new Employee[req];
	for (int i = 0;i < req;i++)
	{
		char n[20]; char d[20]; int k;
		cout << " enter name " << "  Designation " << " Id " << endl;
		cin >> n >> d >> k;
		ptr[i].Id = k;
		strcpy_s(ptr[i].Name, n);
		strcpy_s(ptr[i].Design, d);
	}
	for (int i = 0;i <req;i++)
	{
		cout << " ID = " << ptr[i].Id << " Name = " << ptr[i].Name << " Design = " << ptr[i].Design << endl;
	}

	/*Employee e1[2];
	for (int i = 0;i < 2;i++)
	{
		char n[20]; char d[20]; int k;
		cout << " enter name " << "  Designation " << " Id "<<endl;
		cin >> n >> d>>k;
		e1[i].Id = k;
		strcpy_s(e1[i].Name, n);
		strcpy_s(e1[i].Design, d);
	}
	for (int i = 0;i < 2;i++)
	{
		cout << " ID = " << e1[i].Id << " Name = " << e1[i].Name << " Design = " << e1[i].Design << endl;
	}*/

}