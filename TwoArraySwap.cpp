// 1353a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;

        int a[n], b[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        while (k--)
        {
            auto aa = min_element(a,a+n);
            auto bb = max_element(b, b+n);

            if (*aa < *bb)
            {
                swap(*aa, *bb);
            }
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        
        cout<<sum<<'\n';
    }
}