//2149B Unconventional Pairs
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    optimize();
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        int a[n];
        vector<int> v;
        
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        
        for(int i=0; i<n-1; i+=2)
        {
            int d= abs(a[i]-a[i+1]);
            v.push_back(d);
        }
        
        // for(auto i : v) cout<<i<<" ";
        // cout<<endl;
        
        cout<<*max_element(v.begin(), v.end())<<endl;
        
    }
    
    
    return 0;
}