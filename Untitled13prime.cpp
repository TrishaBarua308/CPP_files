#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"Enter number : ";
    cin>>num;
    if(num==0 || num==1)
        cout<<"Not prime number ";
    for(i=2; i<num; i++)
    {
        if(num%i==0)
            count++;
        break;
    }
    if(count==0)
        cout<<"prime number ";
    else
        cout<<"not prime number ";
}
