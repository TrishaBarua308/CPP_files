//2030A        not done

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;   cin>>t;

    while(t--)
    {
        int n,ans=0;    cin>>n;
        vector<int> a(n), b(n), c(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end() );
        for(int i=0; i<n; i++)
        {
            b[i] = a[i];
            c[i] = a[i];
        }
        sort(c.rbegin(), c.rend());
       
        for(int i=0; i<n; i++)
        {
            ans += abs(b[i]-c[i]);
        }

        cout<<ans<<endl;
        
        
    }

    return 0;
}