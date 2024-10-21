//339B
#include<bits/stdc++.h>
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    optimize();
    ll n,m,sum=0; cin>>n>>m;
    ll a[m];

    for(ll i=0; i<m; i++) cin>>a[i];

    for(ll i=0; i<m-1; i++)
    {
        if(a[i] <= a[i+1])
        {
            sum += (a[i+1]-a[i]);
        }
        else
        {
            sum += (n-a[i]+a[i+1]); // n-(a[i]-a[i+1])
        }
    }

    cout<<sum+(a[0]-1);

}