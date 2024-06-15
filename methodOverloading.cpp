// method overloading = polymorphism type under static/runtime polymorphism
#include <iostream>
using namespace std;
class Sum
{
public:
    void fun(int x)
    {
        cout << "value is " << x << endl;
    }
    void fun(int x, int y)
    {
        cout << "Sum is " << x + y << endl;
    }
    void fun(int x, int y, int z)
    {
        cout << "Sum is " << x + y + z << endl;
    }
};
int main()
{
    Sum obj;
    obj.fun(2);
    obj.fun(2, 2);
    obj.fun(2, 4, 6);

    return 0;
}