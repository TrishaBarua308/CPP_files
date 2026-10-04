#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                string s;
                s = v[i] + v[j];
                string temp = s;
                reverse(temp.begin(), temp.end());

                if (s == temp)
                {
                    flag = true;
                    break;
                }
            }
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}