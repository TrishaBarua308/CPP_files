#include<iostream>
using namespace std;
class Base
{
public:
    void display_B()
    {
        cout<<"Hello Base class"<<endl;
    }
};
class derive : private Base
{
public:
    void display_D()
    {
        display_B();//call display function of base class
        cout<<"Hello Derived class"<<endl;
    }
};
int main()
{
    derive obj;
    obj.display_D();//call display func of derived class
}

