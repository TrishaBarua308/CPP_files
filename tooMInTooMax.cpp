// 1934/A 
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        cout<<abs(a[0]-a[n-1]) + abs(a[0]-a[n-2]) + abs(a[1]-a[n-1]) + abs(a[1]-a[n-2]) <<endl;
    }

    return 0;
}