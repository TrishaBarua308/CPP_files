#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,row,col,rsum[10]= {0},csum[10]= {0},dsum=0;
    cout<<"Enter row and column of matrix : ";
    cin>>row>>col;

    cout<<endl;
    cout<<"Enter the elements of A matrix : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"A ["<<i<<"] ["<<j<<"] : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"A "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0; i<row; i++)//for row
    {
        rsum[i]=0;
        for(j=0; j<col; j++)
        {
            rsum[i] = rsum[i]+a[i][j];
        }
        cout<<"Sum of "<<i+1<<" no row is : "<<rsum[i];
        cout<<endl;
    }
cout<<endl;
    for(i=0; i<row; i++)//for column
    {
        csum[i]=0;
        for(j=0; j<col; j++)
        {
            csum[i] = csum[i]+a[j][i];
        }
    cout<<"Sum of "<<i+1<<" no column is : "<<csum[i];
    cout<<endl;
    }
cout<<endl;
    for(i=0; i<row; i++)//for diagonal
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
                dsum = dsum + a[i][j];
        }
    }
    cout<<"Sum of diagonal of a matrix : "<<dsum<<endl;

    getch();
    return 0;
}
