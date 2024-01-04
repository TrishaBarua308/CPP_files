#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,first =0,second = 1,fibo,n;
    cout<<"Enter last number : ";
    cin>>n;
    cout<<"Fibonacci series :"<<endl;
    cout<<first<<" "<<second;
    for(i=3;i<=n;i++)
    {
        fibo = first + second;
        cout<<" "<<fibo;
        first = second;
        second = fibo;
    }
    getch();
    return 0;
}
