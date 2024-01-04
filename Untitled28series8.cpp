//1^2X2^2X3^2X...X n^2=sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=1;
    cout<<"Enter last number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum *= i*i;
    }
    cout<<"1^2 X 2^2 X 3^2 X...X"<<n<<"^2"<<" = "<<sum;
    getch();
    return 0;
}

