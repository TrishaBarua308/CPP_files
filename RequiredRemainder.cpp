#include<bits/stdc++.h>//1374A
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,i;
        cin>>x>>y>>n;
        cout<<(n-y)/x*x+y<<endl;
    }
}