#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int y=20;


    cout<<"Before : ";
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y = abs(x-y);
    x = abs(x-y);


    cout<<"After : ";
    cout<<x<<" "<<y<<endl;
}