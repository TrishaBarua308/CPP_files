#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll temp =1;

        for(ll i=0; i<n; i++)
        {
            cout<<temp<<" ";
            temp +=2;
        }
        cout<<'\n';
    }
}
