/*
5 
given
void disp(int); function.

now create a function pointer and call this function using function pointer.
*/


#include <iostream>
using namespace std;
void disp(int a);

int main()
{
    void (*ptr)(int) = disp;
    ptr(10);
}
void disp(int a) 
{
    cout << "you hav given " << a<< endl;
}

