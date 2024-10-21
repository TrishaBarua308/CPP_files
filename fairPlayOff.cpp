//1535a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3];

        int res = max(a[0],a[1]) + max(a[2],a[3]);
        //cout<<"Before sorting = "<<res<<endl;
        sort(a,a+4);

        int p = a[2]+a[3];
        //cout<<"After sorting = "<<p<<endl;



        if(res>=p)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}