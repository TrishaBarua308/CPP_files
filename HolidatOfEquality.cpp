#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum=0;
    cin>>n;

    vector<int> v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

     if(n==1)
    {
        cout<<0<<'\n';
        return 0;
    }

    ll max = *max_element(v.begin(), v.end());

    for(ll i=0; i<n; i++)
    {
        sum += abs(v[i]-max);
    }

    cout<<sum<<'\n';



    return 0;
}