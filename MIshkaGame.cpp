//703a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            count++;
        }
        if(a<b)
        {
            count--;
        }
    }
        if(count>0) cout<<"Mishka"<<endl;
        else if(count<0) cout<<"Chris"<<endl;
        else if(count==0) cout<<"Friendship is magic!^^"<<endl;

    return 0;
}