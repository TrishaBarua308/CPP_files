#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    bool prefix=true;
    bool suffix= true;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i]) prefix=false;
        if(s[i]!=t[m-n+i]) suffix = false;  
    }

    if(prefix && suffix) cout<<0<<endl;
    else if(prefix) cout<<1<<endl;
    else if(suffix) cout<<2<<endl;
    else cout<<3<<endl;

        return 0;
}