//490A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t],flag1,flag2,flag3;
    flag1=flag2=flag3=0;

    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<t; i++)
    {
        if(a[i]==1 || a[i]==2 || a[i]==3) 
        {
            cout<<i+1<<" ";
        }
        //else if(a[i]==2) cout<<i+1<<" ";
        //else if(a[i]==3) cout<<i+1<<" ";
        
    }

}