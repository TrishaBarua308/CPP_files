#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter number : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
         cout<<col<<" ";
    cout<<endl;
    }


    cout<<endl;
    cout<<"Enter number : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
            cout<<row<<" ";
        cout<<endl;
    }


    cout<<endl;//3
    cout<<"Enter number : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
         cout<<col%2<<" ";
    cout<<endl;
    }


     cout<<endl;//4
    cout<<"Enter number : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
            cout<<row%2<<" ";
        cout<<endl;
    }
}
