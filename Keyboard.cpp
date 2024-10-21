//474A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    string s1;
    cin>>s1;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
    for(int i=0; i<s1.length(); i++)
    {
        for(int j=0; j<s.length(); j++)
        {
            if(s1[i] == s[j])
            {
                if(ch=='L')//+1
                {
                    cout<<s[j+1];
                }
                if(ch=='R')//-1
                {
                    cout<<s[j-1];
                }
            }
        }
    }

    return 0;
}