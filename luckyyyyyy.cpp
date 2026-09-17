#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;   cin>>s;
        int f,t;
        for(int i=0; i<6; i++)
        {
            f = (s[0]-'0') +  (s[1]-'0') +(s[2]-'0') ;
            t = (s[3]-'0') + (s[4]-'0') + (s[5]-'0') ;
        }
        // cout<<f<<endl<<t<<endl;

        if(f==t) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}