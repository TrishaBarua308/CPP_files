// 1327a
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n'
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cout << (((k * k) <= n && k % 2 == n % 2) ? "YES\n" : "NO\n");
    }
}