/*/
1) create a class with constructors and destructors.
create array of instances and observe how program behaves.
*/

#include <iostream>
using namespace std;
class Class 
{
    int subjects;
public:
    Class()
    {
        subjects = 0;
        cout << "inside Parameter less constructor"<<"\t"<<subjects << endl;
    }
    ~Class()
    {
        cout << "inside Destructor" <<"\t"<< subjects << endl;
    }
};

int main()
{
    Class m[3];

}