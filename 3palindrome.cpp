#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector < char > s(n);
    if (n == 1) cout << "a";
    else if (n == 2) cout << "aa";
    else if (n == 3) cout << "aab";
    else {

        for (int i = 0; i < n; i += 4)
        {
            s[i] = 'a';
            if (i + 1 < n) s[i + 1] = 'a';
            if (i + 2 < n) s[i + 2] = 'b';
            if (i + 3 < n) s[i + 3] = 'b';
        }

        for (auto i: s) cout << i;
    }

    return 0;
}