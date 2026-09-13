#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  string s;
    cin>>n>>s;
    int flagA=0,flagB=0,flagC=0, count=0,ans;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') flagA=1;
        if(s[i]=='B') flagB=2;
        if(s[i]=='C') flagC=3;
        count++;
        // cout<<count<<endl;
        if(flagA!=0 && flagB!=0 && flagC!=0)
        {
            ans = count;
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}