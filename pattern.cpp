// pattern
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cout<<"Input n: ";
    cin >> n;
    cout<<endl;
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if( (i==0 && j==0) || (i==(n-1) && j==(n-1)) || (i==0 && j==(n-1)) || (i==(n-1) && j==0) )
            {
                cout<<"*";
            }
            else if(i==0 || i==(n-1))
            {
                cout<<"-";
            }
            else if(j==0 || j==(n-1))
            {
                cout<<"|";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}