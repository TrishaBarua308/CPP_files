// A. Fibonacciness
#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int a[5];
        cin >> a[0] >> a[1] >> a[3] >> a[4];
        int ans = 0;
        for (int i = -100; i <= 100; i++)
        {
            int cnt = 0;
            a[2]=i;
            for (int j = 2; j < 5; j++)
            {
                if (a[j] == (a[j - 1] + a[j - 2]))
                {
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}