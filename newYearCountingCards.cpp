// 908A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ps = "aeiou13579";
    cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i]==ps[j])
            {
                count++;
            }
        }
    }

    cout << count;
}