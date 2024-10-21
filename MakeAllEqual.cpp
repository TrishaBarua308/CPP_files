//2001a
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[v[i]]++;
        }

        int ans=0;

        for(int i=0; i<n; i++)
        {
           ans = max(mp[v[i]], ans);
        }
        
        
           // cout<<"ans = "<<ans<<endl;
            cout<<n-ans<<endl;
        
        
    }

    return 0;
}