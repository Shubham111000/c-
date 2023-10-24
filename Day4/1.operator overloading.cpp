using namespace std;
#include<iostream>
class Ab
{
    int num;
    public:
    Ab()
    {
        num=0;
        cout<<"inside Default"<<endl;
    }
    Ab(int num)
    {
        this->num=num;
        cout<<"Inside Constructor"<<endl;
    }
    void getNum()
    {
        cout<<num<<endl;
    }
    Ab& operator*(Ab &ref)
    {
        this->num=num*ref.num;
        return *this;
    }
    Ab& operator+(Ab&ref)
    {
        this->num=num+ref.num;
        return *this;
    }
    Ab& operator/(Ab&ref)
    {
        this->num=num/ref.num;
        return *this;
    }
    Ab& operator-(Ab&ref)
    {
        this->num=num-ref.num;
        return *this;
    }

};
int main()
{
Ab m1(8);Ab m2(4);Ab m3(20);Ab m4(6);Ab m5(m1-m2*m3/m4);
 m5.getNum();
}
