#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll x)
{
    ll ans=0;
    while(x!=0)
    {
        int r = x%10;
        ans += r;
        x/=10;
    }
    return ans;
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        ll x,k;   cin>>x>>k;
        while(sum(x)%k!=0)
        {
            x++;
        }
        cout<<x<<endl;
    }

    return 0;
}