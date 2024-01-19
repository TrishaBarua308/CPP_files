#include<bits/stdc++.h>//451A
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int min=n;
    if(min>m)
    {
        min = m;
    }

    if(min %2 == 0)
    {
        cout<<"Malvika"<<endl;
    }
    else 
    {
        cout<<"Akshat"<<endl;
    }
}