#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j, a[2][2],b[2][2];

    cout<<"Enter the elements of array "<<endl;
    //for A matrix
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout<<"A = "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //for B matrix
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] : ";
            cin>>b[i][j];
        }
        cout<<endl;
    }

    cout<<" B = "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    //for addition
    cout<<"A + B "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<a[i][j]+b[i][j]<<"\t";
        }
        cout<<endl;
    }
cout<<endl;
    getch();
    return 0;
}
