#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class test
{
    int data1,data2;
public:
    test()
    {
       //default/non parameterized function
    }

    /*test(int a,int b)
    {
       data1 = a;
       data2 = b;
    }*/
    void display();
    friend void multiply(test t);//declaration of friend function
    //doesn't matter if it declared in private
};
void test :: display()
{
    cout<<" Data1 = "<<data1<<"\tData2 = "<<data2<<endl<<endl;
}
void multiply(test t)//friend function no need any scope operator
{
    int data;
    data = t.data1 * t.data2;
    cout<<" Multiplication = "<<data<<endl;
}
int main()
{
    test obj(10,20);
    obj.display();
    multiply(obj);//friend function can call without object and dot
    getch();
    return 0;
}
