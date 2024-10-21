//1873A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s == "abc" || s == "acb" || s == "bac" || s == "cba" )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}