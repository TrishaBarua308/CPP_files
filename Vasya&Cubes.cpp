//492A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int sum=0;

    for(int i=1; i<=n/3 +1; i++)
    {
        int d = i*(i+1)/2;
        sum += d;
        if(sum <= n)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    cout<<count<<endl;
}