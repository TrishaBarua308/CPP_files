#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter row number : ";
    cin>>n;

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        for(col=row-1;col>=1;col--)
        {
            cout<<col<<" ";
        }
    cout<<endl;
    }

getch();
return 0;
}
