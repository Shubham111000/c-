/*
5) Define a class with constructor and  member function

	create object, call member function
	now create a reference to that object, and using that reference try to call member function
*/

using namespace std;
#include<iostream>

class Myclass
{
    private:
    int num;
    public:
    Myclass()
    {
        cout<<"inside Default"<<endl;
        num=0;
    }
    Myclass(int num)
    {
        cout<<"inside Parameterised"<<endl;
        this->num=num;        
    }
    void getNum()
    {
        cout<<num<<endl;
    }
    void setNum(int num)
    {
        this->num=num;        
    }
    
};
int main()
{
    Myclass a1(100);
    Myclass a2;
    Myclass&ref=a2;
    ref.getNum();
    ref.setNum(1000);
    ref.getNum();
    a1.getNum();


}