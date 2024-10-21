//1296A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, sum=0;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }

        if(sum %2 !=0 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            sum =0;
            a[0] = a[n-1];
            for(int i=0; i<n; i++)
            {
                sum += a[i];
            }
            if(sum %2 != 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        
    }
}