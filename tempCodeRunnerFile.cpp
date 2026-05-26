// https://atcoder.jp/contests/abc296/tasks/abc296_a
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n;  cin>>n;

    string s;   cin>>s;
    bool ans = true; 

    for(int i=0; i<n; i++)
    {
        if(s[0]=='F' || s[i]==s[i+1] )
        {
            ans = false;
            break;
        }
    }

    if(ans) cout<<"YES\n";
    else    cout<<"NO\n";

}