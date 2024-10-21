// 1433A. Boring Apartments
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int d = count(s.begin(), s.end(), s[0]);
        //cout << d << " digit" << endl;

        int sum = 0;
        int p = s[0] - '0';
        while (p--)
        {
            sum += 10;
        }
        //cout << "First sum = " << sum << endl;

        if (d == 3)
        {
            cout << sum - 4 << '\n';
        }
        else if (d == 2)
        {
            cout << sum - 7 << '\n';
        }
        else if (d == 1)
        {
            cout << sum - 9 << '\n';
        }
        else
        {
            cout << sum << '\n';
        }
    }
}