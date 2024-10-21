//1462A
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
        int j=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        while(j < n/2 )
        {
            cout<<a[j]<<" "<<a[n-j-1]<<" ";
            j++;
        }

        if(n%2 != 0)
        {
            cout<<a[n/2]<<" ";
        }

        cout<<endl;
    }

    return 0;
    
}