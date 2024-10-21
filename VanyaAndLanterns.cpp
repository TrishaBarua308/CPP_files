// 492B
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int n, l;
    cin >> n >> l;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    float max_ele = 0;

    for (int i = 0; i < n - 1; i++)
    {
        float d = abs(a[i] - a[i + 1]);

        max_ele = max(d, max_ele);
    }
    float dd = max_ele / 2,  first = a[0] - 0,  second =l - a[n - 1] ;
    cout << fixed<<max(dd, max(first,second));

    return 0;
}