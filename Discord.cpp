#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(); cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    //optimize();

    int n,m;  cin>>n>>m;
    int a[m][n];
    int mark[n+1][n+1];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            mark[i][j]=0;
        }
    }


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            mark[a[i][j]][a[i][j+1]]=1;
            mark[a[i][j+1]][a[i][j]]=1;
        }
    }

    int ans=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j) continue;
            if(mark[i][j]==0) ans++;
         }
    }

    cout<<ans/2<<endl;

    return 0;

}