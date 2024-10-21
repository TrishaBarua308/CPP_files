// 978B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x' && s[i] == s[i + 1] && s[i + 2] == 'x')
        {
            if (s[i] == 'x' && s[i + 1] == 'x')
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}