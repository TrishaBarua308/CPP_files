#include<iostream>
using namespace std;
//multiple inheritance
class parent
{
public:
    string name;
    parent(){}
    parent(string n)
    {
        name = n;
    }
    void display1()
    {
        cout<<"Name : "<<name<<endl;
    }
};
class child
{
public:
    int age;
    child(){}
    child(int a)
    {
        age = a;
    }
    void display2()
    {
        cout<<"Age : "<<age<<endl;
    }
};
class tutor: public parent,public child
{
public:
    tutor(){}
    void display()
    {
        display1();
        display2();
    }
}tobj;
int main()
{
    tobj.name = "Trisha";
    tobj.age = 21;
    tobj.display();
}
