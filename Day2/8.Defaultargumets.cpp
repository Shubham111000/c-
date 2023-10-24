/*
8) write a function which can accept minimum 3 characters and maximum 5 characters and display them. (use "default arguments")
*/

#include <iostream>
using namespace std;
void disp(char a, char b, char c, char d = 'X', char e = 'Y');
int main()
{
    char a = 'A', b = 'D', f = 's', g = 'k', h = 'j';
    disp(a, b, f);
    cout << endl;
    disp(a, b, f, g);
    cout << endl;
    disp(a, b, f, g, h);
}
void disp(char a, char b, char c, char d, char e) {
    cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e;
}

