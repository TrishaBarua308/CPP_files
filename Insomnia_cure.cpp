#include<bits/stdc++.h>//148A
using namespace std;
int main()
{
    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;

    for(int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            //cout<<i<<" ";
            c--;
        }
        c++;
    }
    //cout<<c<<endl;
    cout<<d-c<<endl;
}