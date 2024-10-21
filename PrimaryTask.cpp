//2000A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        int flag = 0;

        if (s.length() >= 3)
        {
            if (s[0] == '1' && s[1] == '0')
            {
                if (s[2] == '0')
                {
                    flag = 0;
                }
                if (s[2] == '1')
                {
                    if (s[3] >= '0')
                    {
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                    }
                }
                if (s[2] >= '2')
                {
                    flag = 1;
                }
            }
        }

        else flag=0;

        if (flag == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}