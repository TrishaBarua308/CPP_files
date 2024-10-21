//1742A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        if((a[0]+a[1])==a[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}