#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;  cin>>s;
    int flag=1; 
    for(int i=1; i<16; i+=2)
    {
        if(s[i]!='0') 
        {
            flag=0;
        }
    }
    
    if(flag) cout<<"Yes\n";
    else     cout<<"No\n";
    
    return 0;
}