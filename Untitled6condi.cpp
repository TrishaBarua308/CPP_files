#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two number : ";
    cin>>x>>y;
    if(x>y)
        cout<<x<<" is greater than "<<y<<endl;
    else if(x<y)
        cout<<x<<" is smaller than "<<y<<endl;
    else if(x==y)
        cout<<"Two numbers are equal "<<endl;

    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a%2==0)
        cout<<a<<" is a even number "<<endl;
    else
        cout<<a<<" is an odd number "<<endl;

    int m;
    cout<<"Enter m : ";
    cin>>m;
    if(m<0)
        cout<<(-m);
    else
        cout<<m;

    getch();
}
