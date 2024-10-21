#include<bits/stdc++.h>//2009a
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;  cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if(a<=b)
        cout<<b-a<<endl;
    }

    return 0;
}