// 894/A
#include <bits/stdc++.h>
using namespace std; // not done
int main()
{
    string s;
    cin >> s;
    int q, a;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'Q' && s[i] != 'A')
        {
            s.erase(i, 1);
            i--;
        }
    }

    cout << "string = " << s << endl;

    for (int i = 0; i < s.length(); i++)
    {
        q = count(s.begin(), s.end(), 'Q');
        a = count(s.begin(), s.end(), 'A');
    }

    cout << "Q-1=" << q - 1 << endl;
    cout << "A=" << a << endl;

    if (q >= 2 && a >= 1)
    {
        if (a == (q - 1))
        {
            cout << a * 2;
        }
        else if ((q - 1) > a)
        {
            cout << q - 1;
        }
        else
        {
            cout << a;
        }
    }

    else
    {
        cout<<0;
    }

    return 0;
}