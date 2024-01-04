#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n,count = 0 ;
    cout<<"Enter row number : ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<++count<<" ";

        }
        cout<<endl;
    }

    getch();
    return 0;
}
