//1669B
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

        int maxN=-1, count=0, max=1;
        sort(a, a+n);
        for(int i=0; i<n-2; i++)
        {
            if(a[i] == a[i+2])
            {
                cout<<a[i];
                goto out;
            }
        }

        cout<<"-1"<<endl;

        out: 
        cout<<endl;
    }

}