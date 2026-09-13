#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    string s; cin >> s;
    string a;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
            a.push_back(s[i]);
    }
    // cout << a << endl;

    if(a=="|*|") cout<<"in\n";
    else cout<<"out\n";

    return 0;
}