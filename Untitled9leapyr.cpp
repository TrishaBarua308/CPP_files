#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter year : ";
    cin>>yr;
    if(yr%4==0 && yr%100!=0 || yr%400==0)
        cout<<"Leap year"<<endl;
    else
        cout<<"Not Leap year"<<endl;

    int num;
    cout<<"Enter number : ";
    cin>>num;
    (num%2==0)?cout<<num<<" is even":cout<<num<<" is odd";

}
