#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10][10],trans[10][10],row,col,i,j;
    cout<<"Enter row and column of matrix : ";
    cin>>row>>col;

    cout<<"Entered matrix : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"A ["<<i<<"] ["<<j<<"] = ";
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
 cout<<endl;

for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            trans[j][i] = a[i][j];
        }
    }

cout<<"Transposed A : "<<endl;
for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;

    getch();
    return 0;
}
