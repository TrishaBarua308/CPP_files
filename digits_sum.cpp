// digits sum
// 1553a
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, count = 0;
        cin >> n;

        cout << (n/10) +(n%10==9) << '\n';
    }
}