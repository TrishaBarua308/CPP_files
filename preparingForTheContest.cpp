#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;  cin >> n>>k;
        int a[n+1];
        for(int i=1; i<=k; i++) cout<<i<<" ";
        for(int i=n; i>k; i--)  cout<<i<<" ";        
        cout<<endl;
    }
    return 0;
}