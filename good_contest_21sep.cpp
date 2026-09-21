#include <bits/stdc++.h>
using namespace std;
#define optimize()                   \
    ios_base::sync_with_stdio(true); \
    cin.tie(0);                      \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(abs(n - a), max(abs(n - b), abs(n - c))) << endl;
    }

    return 0;
}