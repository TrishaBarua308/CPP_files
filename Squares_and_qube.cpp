#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        set<ll> uni;
        for (ll i = 1; i * i <= n; i++)
        {

            uni.insert(i * i);
        }
        for (ll i = 1; i * i * i <= n; i++)
        {

            uni.insert(i * i * i);
        }

        // v.erase(unique(v.begin(),v.end()),v.end());

        cout << uni.size() << '\n';
    }
}