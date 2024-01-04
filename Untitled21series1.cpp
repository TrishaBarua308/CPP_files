#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,sum=0,a=1;
    cout<<"Enter last number : ";
    cin>>num;
    for(i=1;i<=num;i++)
        sum +=i;
    cout<<"1+2+3+.....+"<<num<<" = "<<sum<<endl;
    getch();
    return 0;
}

