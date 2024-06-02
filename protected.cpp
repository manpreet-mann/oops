#include <iostream>
using namespace std;
class Parent
{
protected:
    int id = 22;
};
class Child : public Parent
{
public:
    void setid(int set_id)
    {
        id = set_id;
    }
    void display()
    {
        cout << "Employee id is: " << id << endl;
    }
};

int main()
{
    Child obj;
    obj.setid(22);
    obj.display();
    return 0;
}