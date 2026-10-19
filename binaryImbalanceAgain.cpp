#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count1 = count(s.begin(), s.end(), '1');

        if(count1==n) cout<<"NO\n";
        else   cout << "YES\n";
    }
    return 0;
}