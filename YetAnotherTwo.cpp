//1409A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,num;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        num = abs(a-b);
        if(num%10 != 0)
        {
            cout<<(num/10)+1<<endl;
        }
        else
        {
            cout<<(num/10)<<endl;
        }
    }
    return 0;
}