#include<iostream>
using namespace std;
class student{
    public:
    string name; 
    int rollNo;

};
int main(){

    student *s = new student;
    
    cin>>(*s).name;
    cout<<(*s).name;
    return 0;
}