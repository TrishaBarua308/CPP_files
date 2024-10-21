#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int n = s.length();

    for (int i = 0; i < n;)
    {
        int j = i;
        int num = 0;
        for (; j < n; j++)
        {
            if (s[j] == '.')
            {
                break;
            }

            num = num * 10 + (s[j] - '0');

            if (num >= 255)
            {
                cout << "1.Invalid";
                return 0;
            }
        }
        i = j + 1;
        v.push_back(num);
    }

    for(int i : v)
    {
        cout<<i<<" ";
    }

    if (v.size() == 4)
    {
        cout << "Valid";
    }
    else
    {
        cout << "2.Invalid";
    }
}