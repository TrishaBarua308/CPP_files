#include<bits/stdc++.h>//705A
using namespace std;
int main()
{
    int a;
    cin>>a;

    for(int i=1; i<a; i++)//calculating all number expect one
    {
        if(i%2==0)//even
        {
            cout<<"I love that ";
        }
        if(i%2!=0)//odd
        {
            cout<<"I hate that ";
        }
    }

    if(a%2!=0)
    {
        cout<<"I hate it";
    }
    if(a%2==0)
    {
        cout<<"I love it";
    }
}