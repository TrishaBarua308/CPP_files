#include<bits/stdc++.h>//61A
using namespace std;
int main()
{
    string s1,s2,n;
    cin>>s1;
    cin>>s2;
    for(int i=0; i<s1.length(); i++)
    {
         if(s1[i]!=s2[i])
         {
            cout<<1;
         }
         else if(s1[i]==s2[i])
         {
            cout<<0;
         }
    }
    cout<<endl;
}