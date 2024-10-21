//1915C
//can i square
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum=0;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        long long  d = sqrt(sum);
        
        if(d*d == sum  )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}