// 1472a    A. Cards for Friends
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n, a = 1, b = 1;
        cin >> w >> h >> n;

        if (w % 2 == 0)
        {
            while (w % 2 == 0)
            {
                w /= 2;
                a *= 2;
            }
        }

        if (h % 2 == 0)
        {
            while (h % 2 == 0)
            {
                h /= 2;
                b *= 2;
            }
        }

        if ((a * b) >= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}