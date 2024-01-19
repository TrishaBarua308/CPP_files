#include<bits/stdc++.h>//469A
using namespace std;
int main()
{
    int n,p,q,a[200],count=0;

    cin>>n>>p;
    for(int i=0; i<p; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=p; i<(p+q); i++)
    {
        cin>>a[i];
    }
    sort(a,a+(p+q));//sorted from a=0 to p+q position

    for(int i=0; i<(p+q); i++)
    {
        if(a[i]!= a[i+1])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    
    
}