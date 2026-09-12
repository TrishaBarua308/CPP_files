#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;  cin>>s;
    int n = s.size();
    string ans(2*n-1., ' ');
    
    for(int i=0; i<(n*2)-1; i++)
    {
        if(i%2==0) ans[i] = s[i/2] ;
    }
    
    cout<<ans<<endl;
    
    return 0;
}