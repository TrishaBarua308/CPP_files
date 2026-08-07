#include <bits/stdc++.h>
#define optimize()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    // optimize();
    int r, c;
    cin >> r >> c;
    char a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < r; i++)
    {
        for (int i2 = i + 1; i2 < r; i2++)
        {
            int flag = 1;

            for (int j = 0; j < c; j++)
            {
                if (a[i][j] == 'x' && a[i2][j] == 'x')
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                ans++;
        }
    }

    cout << ans << endl;
}