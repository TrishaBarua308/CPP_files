#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 0; i < n - 1; i++)
        {
         int res =  abs(a[i] - a[i + 1]);
         sum += res;
        }

        cout << sum << '\n';
    }
}