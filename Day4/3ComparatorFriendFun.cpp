
/*
3) Given

class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
};		
	
write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) and check whether Modules are same or not.
call this "check" function from main function.

*/

using namespace std;
#include<iostream>
class Module2;
class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
friend void Check(Module1 &ref1 ,Module2 &ref2);
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
friend void Check(Module1 &ref1 ,Module2 &ref2);
};		
void Check(Module1 &ref1 ,Module2 &ref2)
{
    if(ref1.duration==ref2.duration)
        cout<<"Modules are same"<<endl;
    else
        cout<<"modules are not same"<<endl;
}
int main()
{
    Module1 m1(150);
    Module2 m2(100);
    Check(m1,m2);
    Module1 m3(50);
    Module2 m4(50);
    Check(m3,m4);

}