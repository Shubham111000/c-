/*
9)write a function which takes 3 arguments
variable, pointer and a reference.(any datatype)
invoke this function and show how "call by value","call by address" and "call by reference" will work.
*/

#include <iostream>
using namespace std;
void Displ(int a, int* b, int&);

int main()
{
    int a = 0, b = 0;
    int* ptr = &a;
    int& ref = b;
    Displ(10, &a, ref);
    cout << a << "\n" << b;

}
void Displ(int a, int* b, int& c)
{
    cout << a << endl;
    *b += 2;
    c -= 5;


}

