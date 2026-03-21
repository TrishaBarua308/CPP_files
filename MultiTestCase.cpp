// multi test case
#include<bits/stdc++.h>
#define optimize ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    optimize;
    int t;     cin>>t;
    while(t--)
    {
        int n;    cin>>n;
        int a[n];
        for(int i=0; i<n; i++)    cin>>a[i];

        int odd=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]%2==1) ++odd;
        }
        cout<<odd<<endl;

    }

    return 0;
}