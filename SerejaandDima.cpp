//381a
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,sereja=0, dima=0, f=1;
    cin>>n;

    vector<int> v(n);
    
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    while(!v.empty())
    {
        if(f==1)
        {
            if(v[0] > v.back())
            {
                sereja += v[0];
                v.erase(v.begin());
            }
            else
            {
                sereja += v.back();
                v.pop_back();
            }
            f=2;
        }
        else
        {
             if(v[0] > v.back())
            {
                dima += v[0];
                v.erase(v.begin());
            }
            else
            {
                dima += v.back();
                v.pop_back();
            }
            f=1;
        }
    }

    cout<<sereja<<" "<<dima;

    return 0;
}