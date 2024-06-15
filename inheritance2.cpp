#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int id;
};
class Btech : public Student
{
public:
    string subject;
};

int main()
{
    Btech obj;
    obj.name = "Manpreet";
    obj.id = 2;
    obj.subject = "english";
    cout << obj.name << endl;
    cout << obj.id << endl;
    cout << obj.subject << endl;
    // manpreet and 2 is stored in the copy of name and id in the derived class not the original class
    return 0;
}