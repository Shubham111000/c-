/*
6) write a function to swap 2 given numbers using pointers.
*/

#include <iostream>
using namespace std;
void Swap(int* ptr1, int* ptr2);


int main()
{
    int* ptr1, * ptr2;
    int a, b;
    cout << "enter the num 1 and num 2 ";
    cin >> a;
    cin >> b;
    ptr1 = &a;
    ptr2 =&b;
    cout << a << "   " << b << endl;
    Swap(ptr1, ptr2);
    cout << a << "   " << b << endl;
    
}
void Swap(int *ptr1,int *ptr2) {
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
