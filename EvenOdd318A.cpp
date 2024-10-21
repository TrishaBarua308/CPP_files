#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll d = ceil((double)n / 2);

    vector<int> odd;
    vector<int> even;

    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }

    if (d >= k)
    {
        cout << odd[k - 1] << '\n';
    }
    else
    {
        cout << even[k-d-1] << '\n';
    }
}