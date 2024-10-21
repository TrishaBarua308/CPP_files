// 1619A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n % 2 == 0 && s.substr(0,n/2)==s.substr(n/2,n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


/*
for (int i = 0; i < d/2; i++)
            {
                if (s[i] == s[(d / 2) + i])
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }*/