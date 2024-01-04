#include<iostream>
#include<conio.h>
using namespace std;
int x=10;// global variable
int main()
{
    int x = 20;// local variable
    cout<<" x = "<<x<<endl;// 20, cause code priority to the local variable
    cout<<" x = "<<::x<<endl;// ::scope resolution operator print global
    getch();
}
