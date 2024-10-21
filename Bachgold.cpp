//749A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int count = n/2;
        cout<<count<<endl;
        while(count--)
        {
            cout<<2<<" ";
        }
    }
    else if(n%2!=0)
    {
        int count = n/2-1;
        cout<<n/2<<endl;
        while(count--)
        {
            cout<<2<<" ";
        }
        cout<<3<<" ";
    }
    
}