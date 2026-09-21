#include <bits/stdc++.h>
using namespace std;
char s[1000001];
int main()
{
    cin >> s;
    int freq[26] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        freq[s[i] - 'A']++;

    if (n % 2 == 0)
    {
        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO SOLUTION\n";
        }
        else
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = (char)('A' + i);
                    cout << ch;
                }
            }

            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = (char)('A' + i);
                    cout << ch;
                }
            }
            cout << endl;
        }
    }
    else // odd n
    {
        int cnt = 0, index = -1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                cnt++;
                index = i;
            }
        }

        if (cnt == 1)
        {
            for (int i = 0; i < 26; i++)
            {

                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = (char)('A' + i);
                    cout << ch;
                }
            }

            char ch = (char)('A' + index);
            cout << ch;

            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = (char)('A' + i);
                    cout << ch;
                }
            }
            cout << endl;
        }
        else
            cout << "NO SOLUTION\n";
    }

    return 0;
}