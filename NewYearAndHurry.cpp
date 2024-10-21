//750a A. New Year and Hurry
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,count=0;
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        sum+=(5*i);
        if(sum <= (240-k))
        {
            count++;
        }
    }

    cout<<count;


    return 0;

}