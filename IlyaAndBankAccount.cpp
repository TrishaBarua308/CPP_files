//313A
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    int n; cin>>n;
    string ans;

    if(n<0)
    {
        string s = to_string(n);
        int d = s.length();
        if(s[d-1]<s[d-2])
        {
            s.erase(s.begin()+(d-2), s.begin()+(d-1));
            ans=s;
        }
        else
        {
            s.pop_back();
            ans = s;
        }
    
    }
    

    if(ans=="-0") cout<<0;
    else if(n>0) cout<<n;
    else cout<<ans;

    return 0;
}