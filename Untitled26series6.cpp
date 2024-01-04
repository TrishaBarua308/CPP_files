//1-2+3-4+5-6+....+n=sum
//(1+3+5+...)-(2+4+6+...)=sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,even=0,odd=0;
    cout<<"Enter last number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even += i;
        else
            odd += i;
    }
    cout<<"1-2+3-4+...+"<<n<<" = "<<odd-even;
}
