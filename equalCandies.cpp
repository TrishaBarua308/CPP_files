//1676b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,sum=0;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        auto aa = min_element(a,a+n);

        for(int i=0; i<n; i++)
        {
            sum += abs((*aa)-a[i]);
        }

        cout<<sum<<'\n';

    }

    return 0;
}