//320/A
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int flag = 1;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i=i+2;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            i++;
        }
        else if(s[i]=='1')
        {
            continue;
        }
        else
        {
            flag=0;
        }
    }

    cout<<(flag?"YES":"NO")<<endl;


}