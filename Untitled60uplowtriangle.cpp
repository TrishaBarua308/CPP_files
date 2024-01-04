#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,a[10][10],i,j,lowSum=0,upperSum=0;
    cout<<"Enter the row and column of matrix : ";
    cin>>row>>col;
    cout<<endl;
    cout<<"Enter the elements of matrix : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"A ["<<i<<"] ["<<j<<"] : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"A "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
                upperSum = upperSum + a[i][j];
            else if(i>j)
                lowSum = lowSum + a[i][j];
        }
    }
     cout<<endl;
    cout<<"Sum of the upper triangle : "<<upperSum<<endl;
    cout<<"Sum of the lower triangle : "<<lowSum<<endl;

    getch();
    return 0;
}
