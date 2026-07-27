// rotate atcoder
#include<bits/stdc++.h>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;   cin>>n;
    char a[n][n], na[n][n]={0};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    // 0th row
    for(int j=0; j<n-1; j++)  na[0][j+1] = a[0][j];
    
    // (n-1)th column
    for(int i=0; i<n-1; i++)  na[i+1][n-1] = a[i][n-1];

    // (n-1)th row
    for(int j=1; j<n; j++)   na[n-1][j-1] = a[n-1][j];

    // 0th column
    for(int i=1; i<n; i++)  na[i-1][0] = a[i][0];

    // mid values
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
        {
            na[i][j] = a[i][j];
        }
    }

    //cout<<endl<<endl;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<na[i][j];
        }
        cout<<endl;
    }

    return 0;
}