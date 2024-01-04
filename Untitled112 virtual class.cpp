#include<iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"Base"<<endl;
    }
};
class derived1 : public base
{
public:
    void display()
    {
        cout<<"Derived class 1"<<endl;
    }
};
class derived2 : public base
{
public:
    void display()
    {
        cout<<"Derived class 2"<<endl;
    }
};

int main()
{
    base *b,p;
    derived1 d1;
    derived2 d2;
    b = &p;
    b->display();//base
    b = &d1;
    b->display();//derived 1
    b = &d2;
    b->display();//derived2


    /*
    b = &p;
    b->display();//base,without using virtual keyword
    b = &d1;
    b->display();//base*/
}





