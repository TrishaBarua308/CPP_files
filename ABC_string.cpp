#include <bits/stdc++.h>
#define optimize                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        
        bool ok = false;
        for (int a = 0; a <= 1; a++)
        {
            for (int b = 0; b <= 1; b++)
            {
                for (int C = 0; C <= 1; C++)
                {
                    bool valid = true;
                    int o = 0, c = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'A')
                        {
                            if (a == 0)
                                o++;
                            else
                                c++;
                        }
                        else if (s[i] == 'B')
                        {
                            if (b == 0)
                                o++;
                            else
                                c++;
                        }
                        else
                        {
                            if (C == 0)
                                o++;
                            else
                                c++;
                        }
                        if (c > o)
                            valid = false;
                    }
                    if (o != c)
                        valid = false;
                    if (valid)
                        ok = true;
                }
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}