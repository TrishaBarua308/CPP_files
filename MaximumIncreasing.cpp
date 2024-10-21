//702A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(a[i] < a[i+1])
        {
            //cout<<"a = "<<a[i]<<"& "<<a[i+1]<<endl;
            //cout<<"count "<<count<<endl;
            count++;
        }
        else
        {
            count=1;
        }
    }

    cout<<count<<endl;

    return 0;
}