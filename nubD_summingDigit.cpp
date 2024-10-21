#include <bits/stdc++.h>
using namespace std;
/*int res(int n, int sum)
{
    int rem;
    if (sum < 10)
    {
        return sum;
    }
    if (n == 0)
    {
        return sum;
    }
    else
    {
        rem = sum % 10;
        sum += rem;
        return res(n / 10, sum);
    }
}
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        cout << res(n, 0) << '\n';
    }
}*/
int main()
{
    int N;
    while (cin >> N && N != 0)
    {
        int g = 0;
        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                g += __gcd(i, j);
            }
        }

        cout << g << '\n';
    }
}
