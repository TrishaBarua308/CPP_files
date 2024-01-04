//1*2 + 2*3 + ...+n1*n2=sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,a=1,b=2,sum=0;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    while(a<=num1 && b<=num2)
    {
        sum = sum + a*b;
        a++;
        b++;
    }
    cout<<"1*2 + 2*3 +...+ "<<num1<<"*"<<num2<<" = "<<sum<<endl;
    getch();
    return 0;
}
