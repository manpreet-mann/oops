#include <iostream>
using namespace std;
class Base
{
public:
    void print()
    {
        cout << "printing base class" << endl;
    }
    void show()
    {
        cout << "showing base class" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "printing derived class" << endl;
    }
    // void show(){
    //     cout<<"showing derived class"<<endl;
    // }
};

int main()
{
    Derived obj;
    obj.print();
    obj.show();
    cout << "============" << endl;
    Base *bptr;
    bptr = &obj;
    bptr->print();
    bptr->show();
    return 0;
}