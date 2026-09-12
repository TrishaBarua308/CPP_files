#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin>>n;
    string s;  cin>>s;
    int flag=1;
    for(int i=0; i<n-1; i++)
    {        
        int d = abs( (s[i]-'a') - (s[i+1]-'a') );

        if(d!=1)
        {
            flag=0;
            break;
        }
    }

    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
    
    
    return 0;
}