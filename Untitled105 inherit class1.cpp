#include<iostream>
using namespace std;
class base
{
public:
    string name;
    int age;
    base(){}
    base(string n,int a)
    {
        name = n;
        age = a;
    }
    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
}bobj;

class derived: public base
{
public:
    int id;
    derived(){}
    derived(int i)
    {
        id = i;
    }
    void display2()
    {
        display1();
        cout<<"ID : "<<id;
    }

}dobj;
int main()
{
    bobj.name="Alice";
    bobj.age= 25;
    bobj.display1();

    dobj.name="Pampu";
    dobj.age= 24;
    dobj.id=1016;
    dobj.display2();

}
