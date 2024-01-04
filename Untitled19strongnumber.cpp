#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,rem,sum=0,fact,i,temp,n=0;
    cout<<"Enter number : ";
    cin>>num;
    temp = num;//123
    while(temp!=0)
    {
        rem = temp % 10;//3
        fact=1;
        for(i=rem;i>=1;i--)
        {
            fact *=i;
        }
        sum+=fact;
        temp = temp /10;
    }
    if(sum==num)
        cout<<num<<" is a strong number.";
    else
        cout<<num<<" is not a strong number.";
}
