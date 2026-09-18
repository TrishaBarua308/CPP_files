#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(true); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;  cin>>t;
    while(t--)
    {
        int n, k; cin>>n>>k;
        string s;  cin>>s;
        int ans=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                for(int j=i; j<(i+k) && j<n; j++)
                {
                    s[j]='W';
                }
                ans++;
                //cout<<"ans = "<<ans<<endl;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
