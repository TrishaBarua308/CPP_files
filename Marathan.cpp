#include<bits/stdc++.h>//1692A
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a<b ) count++;
        if(a<c ) count++;
        if(a<d) count++;
        
        cout<<count<<endl;
    }
}