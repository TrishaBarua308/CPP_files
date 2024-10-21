// maximize the last element
#include <bits/stdc++.h>
#define ll long long // not done

using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans = max(ans, a[i]);
        }

        cout << ans << '\n';
    }
}