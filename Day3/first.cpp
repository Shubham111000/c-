#include<iostream>
using namespace std;

class MyClass
{
	private:
		int num;
	public:
		MyClass(int num)
		{
			this->num=num;
		}
		int getNum()
		{
			return num;
		}
		MyClass operator+ (MyClass &ref)  //+
		{
			return MyClass(num+ref.num);
		}
		MyClass operator-(MyClass &ref)
		{
			return MyClass(num-ref.num);
		}
		MyClass operator* (MyClass &ref)
		{
			return MyClass(num*ref.num);
		}
		MyClass operator/ (MyClass &ref)
		{
			return MyClass(num/ref.num);
		}
		void operator+=(MyClass &ref)
		{
			num=this->num+ref.num;
		}
		
};

int main()
{
	int *ptr=new int[5];
	delete ptr;
	

}
