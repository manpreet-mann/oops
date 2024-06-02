#include <iostream>
using namespace std;
class Animal
{
    int age;
    int weight;

public:
    void bark()
    {
        cout << "MOO" << endl;
    }
};
class Human
{
public:
    int age;
    void speak()
    {
        cout << "Hello" << endl;
    }
};
class Hybrid : public Animal, public Human
{
};
int main()
{
    Hybrid h;
    h.bark();
    h.speak();
    return 0;
}