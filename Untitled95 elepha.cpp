//617A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0;
    cin>>x;
    if(x==1)
        cout<<"1";
    int a[]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        if(x%(a[i]+1)==0)
            count++;
    }
    cout<<count;
}
