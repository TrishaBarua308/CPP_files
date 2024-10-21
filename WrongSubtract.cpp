#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int temp = n;

    while (k--)
    {
        if (temp % 10 != 0)
        {
            temp--;
        }
        else
        {
            temp /= 10;
        }
    }

    cout << temp << '\n';

    return 0;
}