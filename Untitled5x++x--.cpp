#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=10;
    int y = x++;
    cout<<"y = "<<y<<endl;//10

    y = ++x;
    cout<<"y = "<<y<<endl;//12

    y = x--;
    cout<<"y = "<<y<<endl;//12

    y = --x;
    cout<<"y = "<<y<<endl;//10

    y = ++x;
    cout<<"y = "<<y<<endl;//11

    y = x--;
    cout<<"y = "<<y<<endl;//11

     y = ++x;
    cout<<"y = "<<y<<endl;//11
    char d;//1
    short s;//2
    int a;//4
    long l;//4
    float b;//4
    double c;//8
    long double ld;//12

    int e = sizeof(d);
    cout<<"char :"<<e<<endl;

    e = sizeof(s);
    cout<<"short :"<<e<<endl;

    e = sizeof(a);
    cout<<"Int :"<<e<<endl;

    e = sizeof(l);
    cout<<"long :"<<e<<endl;

    e = sizeof(b);
    cout<<"float :"<<e<<endl;

    e = sizeof(c);
    cout<<"double :"<<e<<endl;

    e = sizeof(ld);
    cout<<"long double :"<<e<<endl;

    int num1,num2,sum;
    sum = (num1=10,num2=20,sum=num1+num2);
    cout<<"Sum = "<<sum<<endl;

    getch();
}
