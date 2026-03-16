// atcoder
// double click
#include<bits/stdc++.h>
#define ll long long
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();
    ll n, d;   cin>>n>>d;
    ll a[n];

    for(int i=0; i<n; i++)  cin>>a[i];

    ll index=-1;

    for(ll i=0; i<n-1; i++)
    {
        int ft = abs(a[i+1]-a[i]);
        if( ft <= d)
        {
            index = a[i+1];
            break;
        }
    }
    
    cout<<index<<endl;


    
}