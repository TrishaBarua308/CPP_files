//1+1/2+1/3+....+n/n=sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num,sum=0,i;
    cout<<"Enter numbers : ";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        sum = sum + 1/i;
    }
    cout<<"1 + 1/2 + 1/3 +...+ "<<"1"<<"/"<<num<<" = "<<sum;
    getch();
    return 0;
}
