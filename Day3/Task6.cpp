#include "pch.h"
#include "framework.h"
using namespace std;
#include<iostream>
#include "Book.h"
#include<string>




Book::Book(char* str, int k, int j)
{
	Bookname = new char[strlen(str) + 1];
	strcpy_s(Bookname, strlen(str) + 1, str);
	book_id = k;
	Price=j;
}
void Book::getBookName()
{
	cout << Bookname<<endl;
}
void Book::getBook_id() 
{
	cout << book_id << endl;
}
void Book::getPrice()
{
	cout << Price << endl;
}
Book::~Book()
{
	delete [] Bookname;
}
Book::Book(Book&ref)
{
	Bookname = new char[strlen(ref.Bookname) + 1];
	strcpy_s(Bookname, strlen(ref.Bookname) + 1, ref.Bookname);
	book_id = ref.book_id;
	Price = ref.Price;
}

