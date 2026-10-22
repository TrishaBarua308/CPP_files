#include <bits/stdc++.h>
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
        bool flag = false;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                flag = true;
        }

        if (flag)
        {
            char ch[n];
            for (int i = 0; i < n; i++)
            {
                if (i == 1) ch[1] = 'B';
                else ch[i] = 'R';
            }
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << ch[i];
            cout << endl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}