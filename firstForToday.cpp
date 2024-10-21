#include <bits/stdc++.h> // only pluses
using namespace std;
int findMax(int a, int b, int c)
{
    int n = 5,res;
    while (n--)
    {
        if (a <= b && a <= c)
        {
            a++;
        }
        else if (b <= c && b <= a)
        {
            b++;
        }
        else
        {
            c++;
        }

         res = a * b * c;
    }

    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << findMax(a, b, c) << '\n';
    }
}