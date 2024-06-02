#include <iostream>
using namespace std;
class Animal
{
    int age;
    int weight;
    public:
    void speak()
    {
        cout << "MOO" << endl;
    }
};
class Dog : public Animal
{
};
int main()
{
    Dog d;
    d.speak();
}