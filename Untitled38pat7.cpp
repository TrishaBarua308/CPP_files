#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter row number : ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
    cout<<endl;
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
    cout<<endl;
    }
}
