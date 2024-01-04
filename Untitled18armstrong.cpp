#include<iostream>
#include<conio.h>
#include<cmath>//pow
using namespace std;
int main()
{
    int num,rem,sum=0,n=0,temp,power;
    cout<<"Enter number : ";
    cin>>num;
    temp = num;//123
    while(temp!=0)
    {
        temp = temp/10;//12
        ++n;
    }
    // pow() returns a double value
    // round() returns the equivalent int
    temp = num;
    while(temp!=0)
    {
        rem = temp%10;//3
        power = round(pow(rem,n));//3^3
        sum = sum + power;
        temp = temp/10;
    }
    if(sum==num)
        cout<<num<<" is an Armstrong number.";
    else
        cout<<num<<" is not an Armstrong number.";
    getch();
    return 0 ;
}
