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
};
class boss
{
    string name;

public:
    void setname(string n)
    {
        name = n;
    }
    string getname(){
        return name;
    }
};
int main()
{
    Employee employee1;
    employee1.Name = "Manpreet";
    employee1.Age = 21;
    employee1.Company = "XYZ";
    employee1.IntroduceYourself();
    boss b1;
    b1.setname("raj");
    cout << "Boss's name is: " << b1.getname() << endl;

    return 0;
}