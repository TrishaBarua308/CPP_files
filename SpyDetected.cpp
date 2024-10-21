#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, index = -1;
        cin >> n;
        unordered_map<int, int> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (const auto &i : v)
        {
            m[i]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (m[v[i]] == 1)
            {
                index = i;
                break;
            }
        }

        cout << index+1 << '\n';
    }

    return 0;
}