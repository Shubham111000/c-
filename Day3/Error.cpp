#include<iostream>
using namespace std;
class myclass
{
private:
	int num;

public:
	myclass()
	{
		this->num = 0;
	}
	void disp()
	{
		cout << num <<endl;
	}
	~myclass()
	{
		cout << "in destructor" << endl;
	}
};
int main()
{
	myclass* m = new myclass[3];
	for (int i = 0; i < 3; i++)
	{
		m[i].disp();
	}
	delete [] m;

}