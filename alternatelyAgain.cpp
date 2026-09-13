#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int flag=1;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            flag=0; 
            break;
        }
    }
    if(flag==1) cout<<"Yes\n";
    else cout<<"No\n";
    

    return 0;
}