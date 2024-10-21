//2010a
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    optimize();
    int t; cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        int a[n], sum=0;
        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<n; i++)
        {
            if(i%2==0) sum += a[i];
            else sum -= a[i];
        }


        cout<<sum<<endl;
    }
    return 0;
}