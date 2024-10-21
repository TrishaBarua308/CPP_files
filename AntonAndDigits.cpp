//734B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,sum=0;
    cin>>k2>>k3>>k5>>k6;

    int r = min(k2,min(k5,k6));
    sum += (r*256);

    int p = min((k2-r),k3);
    sum += (p*32);

    cout<<sum;


    return 0;
}