//1986A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);

        cout<<abs(a[0]-a[1])+abs(a[1]-a[2])<<'\n';
    }
}