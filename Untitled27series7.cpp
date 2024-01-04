//1X2X3X...X n=sum
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
        sum *= i;
    }
    cout<<"1X2X3X...X"<<n<<" = "<<sum;
    getch();
    return 0;
}
