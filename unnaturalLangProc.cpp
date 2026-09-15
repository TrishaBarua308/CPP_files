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
        string f, s;
        cin >> f;
        s = f;
        vector<char> ans;

        for (int i = 0; i < n; i++)
        {
            if (f[i] == 'b' || f[i] == 'c' || f[i] == 'd')
                s[i] = 'C';
            if (f[i] == 'a' || f[i] == 'e')
                s[i] = 'V';
        }

        int i = 0;
        while (i < n)
        {
            if (i < n - 3)
            {
                if (s[i] == 'C' && s[i + 1] == 'V' && s[i + 2] == 'C' && s[i + 3] == 'V')
                {
                    ans.push_back(f[i]);
                    ans.push_back(f[i + 1]);
                    ans.push_back('.');
                    i += 2;
                }

                else if (s[i] == 'C' && s[i + 1] == 'V' && s[i + 2] == 'C' && s[i + 3] == 'C')
                {
                    ans.push_back(f[i]);
                    ans.push_back(f[i + 1]);
                    ans.push_back(f[i + 2]);
                    ans.push_back('.');
                    i += 3;
                }
            }
            else
            {
                ans.push_back(f[i]);
                i++;
            }
        }

        for (auto v : ans)
            cout << v;
        cout << endl;
    }

    return 0;
}