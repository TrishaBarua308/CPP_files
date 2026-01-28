//2158/A suspension
#include<bits/stdc++.h>
#define optimize() ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();

    int t;   cin>>t;

    while(t--)
    {
        int n,y,r;   cin>>n>>y>>r;

        cout<<min( n, r+(y/2) )<<endl;
    }

    return 0;
}