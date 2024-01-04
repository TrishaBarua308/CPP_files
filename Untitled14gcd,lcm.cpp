#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,rem,gcd,lcm;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int a = num1, b = num2;
    while(num2!=0)
    {
        rem = num1 % num2;
        num1=num2;
        num2=rem;
    }
    gcd = num1;
    cout<<"GCD = "<<gcd<<endl;
    lcm = (a*b)/gcd;
    cout<<"LCM = "<<lcm;
    getch();
}
