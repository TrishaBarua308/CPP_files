// 4c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t, flag = 0;
    cin >> t;

    map<string,int> mp;
    while(t--)
    {
        string s;
        cin>>s;
        mp[s]++;

        
            if(mp[s] >=2 )
            {
                cout<<s<<mp[s]-1<<'\n';
            }
            else
            {
                cout<<"OK"<<'\n';
            }
    

    }

    return 0;
}
