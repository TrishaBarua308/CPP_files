// 595a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    while (n--)
    {
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a != 0 || b != 0)
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}