//In C++, encapsulation involves combining similar data and functions into a single unit called a class. By encapsulating these functions and data, we protect that data from change. This concept is also known as data or information hiding.
#include <iostream>
using namespace std;
// Class: User defined data type
class Employee
{
    // members of this class inside here => members of class are its attributes and behaviour
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    { // setter
        Name = name;
    }
    string getName()
    { // getter
        return Name;
    }
    void setCompany(string company)
    { // setter
        Company = company;
    }
    string getCompany()
    { // getter
        return Company;
    }
    void setAge(int age)
    { // setter
        Age = age;
    }
    int getAge()
    { // getter
        return Age;
    }
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
    employee1.setAge(23);
    cout << employee1.getName() << "is " << employee1.getAge() << "years old" << endl;
    return 0;
}