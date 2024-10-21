//1176a
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,count=0;
        cin>>n;
        if( n==1)
        {
            cout<<"0\n";
            continue;
        }
        while(n!=1)
        {
            if(n%2==0)
            {
                n /=2; count++;
            }
            else if(n%3==0)
            {
                n = (2*n)/3 ; count++;
            }
            else if(n%5==0)
            {
                n = (4*n)/5 ; count++;
            }
            else 
            {
                count=-1;
                break;
            }
        }
        
    
        cout<<count<<'\n';
    }

    return 0;
}