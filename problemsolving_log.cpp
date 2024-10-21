// 1914a problemsolving log
#include <bits/stdc++.h>
#define max 256
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        string s;
        
        cin >> n >> s;
        sort(s.begin(), s.end());

        map<char,int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        

        for(const auto &it : mp)
        {
            if(it.second >= it.first-'A' +1 )
            {
                sum++;
            }
        }

        cout << sum << '\n';
    }
}