#include<bits/stdc++.h>
//236A
using namespace std;
int main()
{
    string s;
    cin>>s;
    int d = s.length();
    for(int i=0; i<d; i++)
    {
        if(s[i]==s[i+1])
            break;
    }

    if(d%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
