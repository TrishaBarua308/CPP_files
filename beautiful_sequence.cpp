#include<bits/stdc++.h>
#define optimize ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize;
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++) cin>>a[i];
        bool flag=false;
        for(int i=1; i<=n; i++)
        {
            if(i>=a[i])
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}