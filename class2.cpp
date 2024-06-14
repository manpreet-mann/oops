// structure || class
// in structure, we dont have security features
// class has security (public private protected access modifiers)

// in structures, we can not declare methods but variables
// in class, we can  declare variables as well as methods

#include <iostream>
using namespace std;
class student
{
    public:
    int age;
    string name;
};
int main()
{
    student a1;
    a1.name = "manpreet";
    cout<<(a1.name);
    return 0;
}