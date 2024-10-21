//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        if( m<=k )
        {
            cout<<"NO"<<endl;
        }
        else if(m>k)
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;

}