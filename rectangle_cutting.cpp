//A. Rectangle Cutting
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,aa,bb; cin>>a>>b;
        if(a%2!=0 && b%2!=0) cout<<"NO\n";
        else if(a%2==0 && b%2==0) cout<<"YES\n";
        else
        {
            if(a%2==0 && (a/2)==b) cout<<"NO\n";
            else if(b%2==0 && (b/2)==a) cout<<"NO\n";
            else cout<<"YES\n";
        }
        
    }

    return 0;
}