//149A
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k;
    cin>>k;
    int a[12], sum =0,count=0;
    for(int i=0; i<12; i++)
    {
        cin>>a[i];
    }
    sort(a, a+12);
    if(k==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0; i<12; i++)
    {
        k = k-a[12-i-1];
        count++;
        if(k <= 0)
        {
            cout<<count<<endl;
            return 0;
        }
    }

    cout<<"-1"<<endl;

    
    return 0;
}