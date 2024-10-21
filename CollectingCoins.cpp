//1294A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if((a+b+c+n)%3==0)
        {
            int sum = (a+b+c+n)/3;

            if( sum-a>=0 && sum-b>=0 && sum-c>=0 )
            {
             cout<<"YES"<<endl;
            }
            else
            {
             cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}