#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int len,Count;
    Count=0;
    int num[]={4,7,44,77,47,74,447,744,774,477,474,747,444,777};//size = 14
    len = sizeof(num)/sizeof(num[0]);//array size
    for(int i=0; i<len; i++)
    {
        if(n%num[i]==0)
        {
            Count++;
            break;
        }
    }
    if(Count==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
