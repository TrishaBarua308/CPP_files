// 1676c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n>> m;

        string s[n];

        for (int i=0; i<n; i++)
        {
            cin >> s[i];
        }

         ll res = 1e18;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {

                ll pip = 0;
                for (ll k = 0; k < m; k++)
                {
                    ll ff = s[i][k], ss = s[j][k];
                    pip += abs(ff - ss);
                }
                res = min(pip,res);
            }
        }

        cout<<res<<'\n';
    }
}