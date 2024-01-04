#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;
    if (x<y && x<z)
        cout<<"X is smaller"<<endl;
    else if (y<z && y<x)
        cout<<"y is smaller"<<endl;
    else
        cout<<"Z is smaller"<<endl;
        getch();
}
