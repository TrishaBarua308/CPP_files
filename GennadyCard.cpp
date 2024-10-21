//1097A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tab;
    cin>>tab;
    bool flag = false;
    int n=5;
    while(n--)
    {
        string s;
        cin>>s;

        if(tab[0]==s[0] || tab[1]==s[1])
        {
            flag=true;
        }
    }

    cout<<(flag?"YES":"NO")<<'\n';

    return 0;
}
