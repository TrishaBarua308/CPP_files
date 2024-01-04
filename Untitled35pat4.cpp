#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"01.Enter row number : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
            cout<<col<<" ";
    cout<<endl;
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
            cout<<col<<" ";
        cout<<endl;
    }
}
