#include<iostream>
#include<conio.h>
using namespace std;
void display(int a=10,int b=20)
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main()
{
    display();
    display(25,30);
    getch();
    return 0;
}
