#include <iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter row number : ";
    cin>>n;

    for(row=1; row<=n; row++)//C
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n || col ==1)
                cout<<"*"<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;

       for(row=1; row<=n; row++)//s
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 ||row==n||row==round((n/2)+0.5) || (row*col)==2||(row*col)==3||(row*col)==35||(row*col)==42  )
                cout<<"*"<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;


     for(row=1; row<=n; row++)//E
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n || col ==1 || row==round((n/2)+0.5))
                cout<<"*"<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    getch();
   //
    return 0;
}
