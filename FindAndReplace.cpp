//1807c
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        set<char> odd,even;

        for(int i=0; i<n; i++)
        {
            if(i&1) odd.insert(s[i]); // i&1 means bitwise= odd
            else even.insert(s[i]);
        }

        bool flag=0;

        for(auto i : odd)
        {
            if(even.find(i) != even.end())
            {
                flag=1; break;
            }
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}