#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    
    int ans = 0;
    for (int left = 0; left <= n; left++)
    {
        for (int right = 0; right <= n; right++)
        {
            if (left + right > n)  continue;
            int f = left;
            int l = n - right - 1;
            bool flag = true;
            for (int x = 0; f + x <= l - x; x++)
            {
                if (s[f + x] != s[l - x])
                    flag = false;
            }
            if (flag)
            {
                ans = max(ans, l - f + 1);
            }
        }
    }

    cout<<ans;

    return 0;
}