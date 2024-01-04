//1.5+2.5+...+n.5=sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num,sum2=0,i;
    cout<<"Enter numbers : ";
    cin>>num;
    for(i=1.5; i<=num; i++)
    {
        sum2 = sum2+i;
    }
    cout<<"1.5 + 2.5 +...+ "<<num<<" = "<<sum2;
    getch();
    return 0;
}
