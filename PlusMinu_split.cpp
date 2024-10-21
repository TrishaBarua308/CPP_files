//B. Plus-Minus Split
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t; cin>>t;
    while(t--)
    {
        int n,psum=0,msum=0;
        string s; cin>>n>>s;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='+') psum++;
            else if(s[i]=='-') msum++;
        }
        cout<<abs(psum-msum)<<endl;
    }

    return 0;
}