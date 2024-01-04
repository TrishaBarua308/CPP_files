#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"1.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"2.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<"3.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<((char)(col+64))<<" ";
        }
        cout<<endl;
    }



    cout<<endl;
    cout<<"4.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<((char)(row+64))<<" ";
        }
        cout<<endl;
    }



    cout<<endl;
    cout<<"5.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col%2<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<"6.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row%2<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<"5.Enter row number : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
