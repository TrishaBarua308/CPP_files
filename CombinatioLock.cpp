//540A - Combination Lock
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum=0;
    cin>>n;

    string s1,s2;
    cin>>s1>>s2;

    for(int i=0; i<n; i++)
    {
        if(abs(s1[i]-s2[i]) >= 10-(abs(s1[i]-s2[i])) )
        {
            sum += (10-(abs(s1[i]-s2[i])) );
        }
        else
        {
            sum += abs(s1[i]-s2[i]) ;
        }
    }

    cout<<sum<<endl;

    return 0;
}
