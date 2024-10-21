// 1343/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        if (n % 4 == 0)
        {
             cout << "YES\n";
            for (int i = 1; i <= (n/2); i++)
            {
                cout<<i*2<<" ";
            }
           for (int i = 1; i <(n/2); i++)
            {
                cout<<2*i-1<<" ";
            } 

            cout<<n-1+(n/2)<<'\n';
           
        }

        else
        {
            cout << "NO\n";
        }
    }
}