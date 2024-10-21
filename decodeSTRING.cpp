// 1729/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sz, n;//not done yet
        cin >> sz;
        cin >> n;

        vector<char> v;
        string m = "abcdefghijklmnopqrstuvwxyz";

        while (n != 0)
        {
            if (n % 10 != 0)
            {
                int d = n % 10;
                v.push_back(m[d - 1]);
                n /= 10;
            }

            else
            {
                int d = n % 1000;
                int p = d / 10;
                v.push_back(m[p - 1]);
                // cout << "1000 condition = p-1 = " << p - 1 << endl;
                n /= 1000;
            }
        }
        reverse(v.begin(), v.end());
        for (char i : v)
        {
            cout << i;
        }
        cout << '\n';
    }
}

/*


        for (int i = 0; i < n;)
        {
            if ((i + 2) < n && s[i + 2] == '0')
            {

                int d = ((s[i] - '0') * 10) + (s[i + 1] - '0')  ;
                cout << "first condition = d-1 = " << d - 1 << endl;
                i += 3;
                v.push_back(m[d - 1]);
            }
            else
            {
                int d = s[i] - '0';
                v.push_back(m[d - 1]);
                i++;
                cout << "second condition= d-1= " << d - 1 << endl;
            }
        }

        for (auto &ch : v)
        {
            cout << ch;
        }
        cout << '\n';*/