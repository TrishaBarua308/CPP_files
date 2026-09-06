#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;   cin>>n>>m;
    int before[n][m];
    int after[n][m];
    int x=1, y=1;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            before[i][j] = x++ ;
        }
    }

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            after[i][j] = y++ ;
        }
    }


    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(before[i][j]==after[i][j])
            {
                ans++;
            }
        }
    }

    cout<<ans<<endl;

}