//707A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count;
    cin>>n>>m;
    char a[n*m];
    for(int i=0; i<n*m ; i++)
    {
            cin>>a[i];

            if( a[i]=='C' || a[i]=='M' || a[i]=='Y' )
            {
                cout<<"#Color"<<endl;
                return 0;
            }
    }

    cout<<"#Black&White"<<endl;

    return 0;
}
