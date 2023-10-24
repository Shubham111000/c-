#pragma once
class Book {

private:
	char* Bookname;
	int book_id;
	int Price;
public:
	Book(char *ch, int k, int j);
	Book(Book& ref);
	void getBookName();
	void getBook_id();
	void getPrice();
	~Book();
};
