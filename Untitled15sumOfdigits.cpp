#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,temp,sum=0,rem;
    cout<<"Enter n: ";
    cin>>num;
    temp = num;
    while(temp!=0)
    {
        rem = temp % 10;//3
        sum += rem;
        temp = temp / 10;//12
    }
    cout<<"sum = "<<sum;
    return 0;
}
