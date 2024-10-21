// b
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
ll ks(ll M, ll w[], ll v[], ll n)
{
    ll k[n+1][M+1];

    for(ll i=0; i<n+1; i++)
    {
        for(ll j=0; j<M+1; j++)
        {
            if(i==0 || j==0)
            {
                k[i][j]=0;
            }
            else if( w[i-1]<=j )
            {
                k[i][j] = max(v[i-1]+k[i-1][j-w[i-1]] , k[i-1][j] );
            }
            else
            {
                k[i][j]= k[i-1][j];
            }
        }
    }

    return k[n][M];
}
int main()
{
    ll n, m; cin>>n>>m;
    ll w[n], v[n];

    for(ll i=0; i<n; i++)
    {
        cin>>w[i]>>v[i];
    }

    cout<<ks(m,w,v,n); //m=cap, w=weight, v = profit, n = item


    return 0;
}