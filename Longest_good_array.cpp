//C. Longest Good Array
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
        int l,r,count=0; cin>>l>>r;
        int i=1; 
        while(l<=r)
        {
            l = l+i;
            count++;  i++;
        }

        cout<<count<<endl;
    }

    return 0;
}