///1077/A
//frog jumping
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,k,sum=0;
        cin>>a>>b>>k;
        cout<<fixed<<setprecision(0);
        
            if(k%2==0)
            {
                cout<<a*(k/2)-b*(k/2)<<'\n';
            }
            else
            {
                cout<<a*((k/2)+1)-b*(k/2)<<'\n';
            }
    }
}