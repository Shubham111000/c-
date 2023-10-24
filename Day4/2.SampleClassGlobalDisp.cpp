/*
2) class sample
   {
	private:
		char ch;
	public:
		sample(char ch)
		{
			this->ch=ch;
		}
  };

given above class.

write a global function "display" which will access "ch" directly and display it.
call this function from main function.

*/



using namespace std;
#include<iostream>

class sample
   {
	private:
		char ch;
	public:
		sample(char ch)
		{
			this->ch=ch;
		}
        friend void Disp(sample &ref);
  };
  void Disp(sample &ref)
  {
    cout<<ref.ch<<endl;
  }
  int main()
  {
    sample s1('A');
    Disp(s1);
  }