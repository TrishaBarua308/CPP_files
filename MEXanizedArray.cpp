// A. Fibonacciness
#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (min(n, x + 1) < k)
            cout << -1 << endl;
        else
        {
            int ans = 0;
            for (int i = 0; i < k; i++)
            {
                ans += i;
            }
            if(k==x) ans += (n-k)*(x-1);
            else ans +=(n-k)*x;
            
            cout << ans << endl;
        }
    }

    return 0;
}