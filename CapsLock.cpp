#include<bits/stdc++.h>//131A
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;

    for(int i=1; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
           c++;
        }
    }
    if(c==s.length()-1)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i] = tolower(s[i]);
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                s[i] = toupper(s[i]);
            }
        }
    }
    cout<<s<<endl;
}