//1360B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],min=100000;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1]) < min)
            {
                min = abs(a[i]-a[i+1]);
            }
        }

        cout<<min<<endl;
    }
}