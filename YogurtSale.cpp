//1955A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        if(n%2 == 0)//even
        {
            if(a*n > b*(n/2))
            {
                cout<<b*(n/2)<<endl;
            }
            else
            {
                cout<<a*n<<endl;
            }
        }
        else if(n%2 != 0)//odd
        {
            if(a*n > (b*(n/2)+a) )
            {
                cout<<(b*(n/2)+a)<<endl;
            }
            else
            {
                cout<<a*n<<endl;
            }
        }
    }
}