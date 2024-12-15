#include<bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define endl '\n'
using namespace std;
int main()
{
    optimize();

    int t;   cin>>t;

    while(t--)
    {
        string s;  cin>>s;
        reverse(s.begin(), s.end());
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='p')
            {
                s[i]= 'q';
            }
            else if(s[i]=='q')
            {
                s[i]= 'p';
            }
        }

        cout<<s<<endl;
    }
}