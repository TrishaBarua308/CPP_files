// 1374A
//youtbe
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

        ll cnt2 = 0, cnt3 = 0;

        while (!(n % 2))
        {
            n /= 2;
            cnt2++;
        }
        while (!(n % 3))
        {
            n/=3;

            cnt3++;
        }

        if (n != 1 || cnt2 > cnt3)
        {
            cout << "-1\n";
        }
        else
        {
            cout << (cnt3 - cnt2) + cnt3 << '\n';
            // c3 = (2*3)matching part
            // c3-c2 = add 2 to the n to get ans
        }
    }
}