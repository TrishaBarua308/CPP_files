//706B
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    optimize();
    ll n;  cin>>n;
    ll p[n];
    for(ll i=0; i<n; i++) cin>>p[i];

    ll q; cin>>q;
    ll c[q];
    for(ll i=0; i<q; i++) cin>>c[i];

    sort(p,p+n);

    for(ll j=0; j<q; j++)
    {
       ll count = upper_bound(p,p+n,c[j])-p;
        cout<<count<<endl; 
    }
    
   

    return 0;
}