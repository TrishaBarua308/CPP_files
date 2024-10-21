// A. Compare T-Shirt Sizes
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int d1 = s1.length();
        int d2 = s2.length();

        if (s1 == s2)
        {
            cout << "=" << '\n';
        }
        else if (s1 > s2)
        {
            if (s1[d1 - 1] == 'L' && (s2[d2 - 1] == 'L' || s2[d2 - 1] == 'M'))
            {
                cout << ">" << '\n';
            }
            else if (s1[d1 - 1] == 'S' && (s2[d2 - 1] == 'S' || s2[d2 - 1] == 'M'))
            {
                cout << "<" << '\n';
            }
        }
        else
        {
            if (s2[d2 - 1] == 'L' && (s1[d1 - 1] == 'L' || s1[d1 - 1] == 'M'))
            {
                cout << ">" << '\n';
            }
            else if (s2[d2 - 1] == 'S' && (s1[d1 - 1] == 'S' || s1[d1 - 1] == 'M'))
            {
                cout << "<" << '\n';
            }
        }
    }
}
