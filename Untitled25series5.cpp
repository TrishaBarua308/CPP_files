//1^2+2^2+3^2+...+n^2=sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int num,sum=0,i;
    cout<<"Enter numbers : ";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        sum = sum + i*i;
    }
    cout<<"1^2 + 2^2 + 3^2 +...+ "<<num<<"^2"<<" = "<<sum;
    getch();
    return 0;
}
