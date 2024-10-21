// 599a
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a[3], sum = 0;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    ll res = (a[0] + a[1]) * 2;
  

    sum = a[0] + a[1] + a[2];
    
    if (res >= sum)
    {
        cout << sum;
    }
    else
    {
        cout << res;
    }
}