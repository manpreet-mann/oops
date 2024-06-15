#include <iostream>
using namespace std;
class Manpreet
{
private:
    int a;

private:
    int b;

public:
    void setA(int input)
    {
        a = input;
        b = a / 2;
        cout << b;
    }
};

int main()
{
    Manpreet obj;
    obj.setA(9);
    return 0;
}