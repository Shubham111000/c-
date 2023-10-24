/*
4) Define a class , write two member functions 
	void disp1(){ //some code }
	void disp2(){ // some code }

	Try to call disp1   from    disp2.
*/

using namespace std;
#include<iostream>
class Myclass2;
class Myclass1
{
    private:
    int num1;
    public:
    Myclass1(int k)
    {
        num1=k;
    }
    void Disp1(Myclass2&ref);
};
class Myclass2
{
    private:
    int num2;
    public:
    Myclass2(int k)
    {
        num2=k;
    }
    void Disp2()
    {
        cout<<"inside disp 2 "<<num2<<endl;
    }
};
void Myclass1:: Disp1(Myclass2&ref)
    {
        cout<<"Inside Disp 1 "<<num1<<endl;
        ref.Disp2();
    }
int main()
{
    Myclass1 m1(100);
    Myclass2 m2(10);
    m1.Disp1(m2);
}