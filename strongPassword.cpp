//1997a
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        string p = "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p.length(); j++)
            {
                if (s[i] == p[j])
                {
                    p.erase(p.begin() + j);
                }
            }
        }

        int flag = 1;
        // cout<<"p= "<<p<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << s.substr(0, i + 1);
                cout << p[0];
                cout << s.substr(i + 1, n) << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            if (s.back() == 'a') cout << s + 'b' << endl;
            else  cout << s + 'a' << endl;
        }
    }

    return 0;
}