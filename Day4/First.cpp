#include <iostream>
using namespace std;
class base
{
private:
	int a;
public:
	base(int k)
	{
		a=k;
	}
	base()
	{
	}
	void disp()
	{
		cout<<"Value of a is\t"<<a<<endl;
	}
};
class sub:public base
{
private:
	int b;
public:
	sub(int k,int l):base(l)
	{
		b=k;
	}
	void disp()
	{
		cout<<"Value of b is\t"<<b<<endl;
	}
	void operator=(sub &s)
	{
		cout<<"in operator= of sub"<<endl;
		b=s.b;
		base::operator=(s);
	}
};
int main()
{
	int a=5,b=10;
	if(a=b)
		cout<<"hi";
	else 
		cout<<"bye";
	cout<<"bye"<<a;


}