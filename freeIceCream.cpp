//686A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t>>x;
    long long sum=x,count=0;
    while(t--)
    {
        char d;
        int p;
        cin>>d>>p;
        if(d =='+')
        {
            sum += p;
        }
         if(d=='-')
        {
            
            sum -= p;
        }
         if(sum < 0)
        {
            count++;
            sum += p;
        }
    }
     cout<<sum<<" "<<count<<endl;
}