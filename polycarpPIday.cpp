// 1790A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        string s, s1 = "314159265358979323846264338327";
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]==s1[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }
}