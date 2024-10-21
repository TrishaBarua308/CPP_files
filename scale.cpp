// 1996B scale
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        //cout << "result:" << endl;

        for (int i = 0; i < n; i+=k) // col
        {
            for (int j = 0; j < n; j+=k) // r
            {
                cout<<s[i][j];
            }
            cout<<'\n';
        }
    }
}