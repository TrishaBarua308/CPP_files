//1389A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int l,r;
        cin>>l>>r;

        if(2*l > r)//condition, l<=x<y<=r then print result
        {
            cout<<"-1 -1"<<endl;
        }
        else
        { //if a number is divisible by l, then certainly divided by 2*l also
            cout<<l<<" "<<2*l<<endl;
        }

    }
}