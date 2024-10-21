// 43A
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int n,count=1;  cin>>n;
    string s1,s2,s; cin>>s1;

    for(int i=1; i<n; i++)
    {
        cin>>s;
        if(s1==s) count++;
        else s2 = s;
    }
    //cout<<"count = "<<count<<endl;
    cout<<((count>n-count)?s1:s2)<<endl;

    return 0;
}