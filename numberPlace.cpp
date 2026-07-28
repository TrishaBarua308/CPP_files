#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();

    int a[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }

    int flag = 1;

    for (int i = 0; i < 9; i++)
    {
        int freq[10];

        for (int j = 0; j < 10; j++)
        {
            freq[j] = 0;
        }

        for (int j = 0; j < 9; j++)
        {
            freq[a[i][j]]++;
        }

        for (int j = 1; j < 10; j++)
        {
            if (freq[j] == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    // j
    for (int j = 0; j < 9; j++)
    {
        int freq[10];

        for (int i = 0; i < 10; i++)
        {
            freq[i] = 0;
        }

        for (int i = 0; i < 9; i++)
        {
            freq[a[i][j]]++;
        }

        for (int i = 1; i < 10; i++)
        {
            if (freq[i] == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    // 3x3
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i % 3 == 0 && j % 3 == 0)
            {
                int freq[10];
                for (int k = 0; k < 10; k++)
                {
                    freq[k] = 0;
                }
                for (int i2 = i; i2 < i + 3; i2++)
                {
                    for (int j2 = j; j2 < j + 3; j2++)
                    {
                        freq[a[i2][j2]]++;
                    }
                }

                for (int k = 1; k < 10; k++)
                {
                    if (freq[k] == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
    }


    cout << ((flag) ? "Yes\n" : "No\n") << endl;
}
