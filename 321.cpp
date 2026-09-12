#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;  cin>>s;
    string temp = s;
    sort(s.rbegin(), s.rend());
    s.erase(unique(s.begin(), s.end()), s.end());

    if(temp == s) cout<<"Yes\n";
    else cout<<"No\n";
    
    
    return 0;
}