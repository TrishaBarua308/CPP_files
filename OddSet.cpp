//1542A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,even,odd=0 ;
        cin>>n;
       // int d = 2*n;
        int a[2*n];

        for(int i=0; i<(2*n); i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<(2*n); i++)
        {
            if(a[i]%2 != 0)
            {
                odd++;
            }
        }
         even = (2*n) - odd;

        //cout<<"even "<<even<<endl<<"odd "<<odd<<endl;

        if(even == odd)
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