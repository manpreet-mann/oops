#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};
class Male : public Human
{
public:
    string color;
    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
};
int main()
{
    Male obj1;
    cout << obj1.age << endl;
    cout << obj1.color << endl;
    cout << obj1.height << endl;
    // cout << endl;
    obj1.sleep();
    obj1.setWeight(100);
    cout << obj1.weight << endl;
    return 0;
}