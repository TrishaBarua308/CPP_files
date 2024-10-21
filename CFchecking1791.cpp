//1791A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s="codeforces";
    while(t--)
    {
        char ch;
        int flag=0;
        cin>>ch;
        for(int i=0; i<s.length(); i++)
        {
            if(ch==s[i])
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
    }
}