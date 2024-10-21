//2003a
#include<bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t; cin>>t;

    while(t--)
    {
        int n,flag; cin>>n;

        string s; cin>>s;

        if(n==2)
        {
            if(s[0]!=s[n-1])
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        
        else if(s[0]==s[n-1])
        {
            flag=0;
        }
        else//if not equal
        {
            s.erase(s.begin());
            if(s[0]==s[n-1])
            {
                flag=0;
            }
            else 
            {
                flag=1;
            }
        }

        cout<<(flag?"YES":"NO")<<endl;
    }
}