//1843/C
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--)
    {
        ll n,sum=0;
        cin>>n;

        while(n>=1)
        {
            sum+=n;
            n/=2;
        }

        cout<<sum<<endl;
    }

}