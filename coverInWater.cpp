//A. Cover in Water
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
        int n,ans;
        string s; cin>>n>>s;
        int count_dot= count(s.begin(), s.end(), '.');
        int count_sla= count(s.begin(), s.end(), '#');

        if(count_dot <=2)
        {
            cout<<count_dot<<endl;
            continue;
        }
        for(int i=0; i<n-2; i++)
        {
            if(s.substr(i,3)=="...")
            {
                ans = 2;
                break;
            }
            ans = count_dot;
        }

        cout<<ans<<endl;
        
    }

    return 0;
}