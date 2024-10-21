//1873B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n], sum=1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a, a+n);
        a[0] = a[0] + 1;

        for(int i=0; i<n; i++)
        {
            sum *= a[i];
        }

        cout<<sum<<endl;
    }
}