//1829B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=0, count=0;
        for(int i=0; i<n; i++)
        {
        if(a[i] == 0)
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 0;
        }

        }

        cout<<max(ans, count)<<endl;
    }

    
}