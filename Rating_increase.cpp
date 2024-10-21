//A. Rating Increase
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
        string s;  cin>>s;
        int flag=0;

        for(int i=1; i<s.length(); i++)
        {
            int x = stoi(s.substr(0,i));
            int y = stoi(s.substr(i));

            if(s[i]=='0')
            {
                continue;
            }
            if( x < y)
            {
                cout<<x<<" "<<y<<endl;
                flag=1; break;
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        
    }

    return 0;
}