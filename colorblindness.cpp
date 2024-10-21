// 1722b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, flag = 0;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'G'  )
            {
                s1[i] = 'B';
            }

            if(s2[i] == 'G')
            {
                s2[i] = 'B';
            }
        }
        
        

        if (s1 == s2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}