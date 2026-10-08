#include <bits/stdc++.h>
#define ll long long
#define optimize             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int main()
{
    optimize;

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int c = 0;

        while (x.find(s) == string::npos && c<5)
        {
            x += x;
            c++;
        }

        if (x.find(s) == string::npos)
            cout << -1 << endl;
        else
            cout << c << endl;
    }

    return 0;
}