#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n ;i++)
        {
            cin>>a[i];
        }

        ll pref[n+1];
        pref[0]=0;

         for(int i=1; i<n+1 ;i++)
        {
            pref[i] = pref[i-1] + a[i-1];
        }
       

        int q;
        cin>>q;
        
        
        while(q--)
        {
            ll l,r, sum;
            cin>>l>>r;

            sum = pref[r] - pref[l-1];
            

            cout<<sum<<endl;

        }

       

    }
}
