#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n + 1][n + 1], b[n + 1][n + 1], temp[n + 1][n + 1];

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> b[i][j];
        }
    }

    int flag = 0;
    for (int k = 0; k < 4; k++)
    {
        int flag2 = 1;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (a[i][j] == 1 && b[i][j] == 0)
                {
                    flag2 = 0;
                }
            }
        }

        if (flag2 == 1)
        {
            flag = 1;
            break;
        }

        // rotate a
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                temp[i][j] = a[n + 1 - j][i];
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                a[i][j] = temp[i][j];
            }
        }
    }

    if(flag)  cout<<"YES\n";
    else cout<<"NO\n";



    return 0;
}