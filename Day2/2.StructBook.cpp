/*
2) create following structure
struct book
{
    char bid[5];
    char name[30];
    int price;
};
ask user how many records he wants to create and accordingly allocate memory.
accept values from user and display.
(Hint :-use  "new" operator)
*/

#include <iostream>
using namespace std;
#include <string>

struct Book {
    char bid[5];
    char name[30];
    int Price;
};

int main()
{
    int rec;
    cout << "enter How many records of a book do you want" << endl;
    cin >> rec;
    Book* ptr = new Book[rec];
    for (int i = 0;i < rec;i++)
    {
        char bid[5], name[30]; int price;
        cout << " Enter bid ";
        cin >> bid;
        strcpy_s(ptr[i].bid, bid);
        cout << " Enter Name ";
        cin >> name;
        strcpy_s(ptr[i].name, name);
        cout << " Enter price ";
        cin >> price;
        ptr[i].Price = price;

    }
    for (int i = 0;i < rec;i++)
    {
        cout << " for  " << i << endl;
        cout << "bid =" << ptr[i].bid << " Name = " << ptr[i].name << " price = " << ptr[i].Price << endl;
    }

}