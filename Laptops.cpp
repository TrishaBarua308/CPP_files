//456A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, count=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a != b)
        {
            count++;
        }

    }
        if(count !=0 )
        {
            cout<<"Happy Alex"<<endl;
        }
        else
        {
            cout<<"Poor Alex"<<endl;
        }
    
    return 0;
    
}