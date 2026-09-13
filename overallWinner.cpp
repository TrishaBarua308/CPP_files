#include <bits/stdc++.h> // pending
using namespace std;
int main()
{
    int n,t=0,a=0,tindex,aindex;  string s;
    cin >> n >> s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='T')
        {
            t++;  tindex=i;
        }
        else if(s[i]=='A')
        {
            a++;  aindex=i;
        }
    }

    if(t>a) cout<<"T\n";
    else if(t<a) cout<<"A\n";
    else
    {
        if(tindex<aindex) cout<<"T\n";
        else cout<<"A\n";
    }

    return 0;
}