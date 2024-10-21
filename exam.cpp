// 2008b
#include <bits/stdc++.h>//not done
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    // optimize();
    int t;
    cin >> t;
    int n;
    cin >> n;
    int flag = 0;
    int d = sqrt(n);
    if (n != (d * d))
        cout << "No" << endl;
    else
    {
        int a[d + 1][d + 1];

        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                if (i == 1 || i == d || j == 1 | j == d)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
        string s;
        cin >> s;

        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                int t = ((i - 1) * d + j);

                if (a[i][j] == (s[t]-'a'))
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }
    }

    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}