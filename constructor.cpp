// constructor is a special type of method that is invoked each time that an object of a class is created
// 1. constructor does not have a return type,
// 2.contructor has the same name as the class it belongs to
// 3. constructor must be public (not necassarily always)

#include <iostream>
using namespace std;
// Class: User defined data type
class Employee
{
    // members of this class inside here => members of class are its attributes and behaviour
public:
    string Name;
    string Company;
    int Age;
    void IntroduceYourself()
    {
        cout << "Name " << Name << endl
             << "Company " << Company << endl
             << "Age " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("Manpreet", "XYZ", 21);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("abc", "zzzzz", 24);
    employee2.IntroduceYourself();

    return 0;
}