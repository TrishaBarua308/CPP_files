#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<count;
        }
        else if((a+b+c)> 1)
        {
            count++;
            cout<<count;
        }
    }
}
