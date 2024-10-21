//1921a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,d,e,f,g,h;
        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;
        cin>>g>>h;

        int aa = max(a,max(c,max(e,g)));
        int bb = min(a,min(c,min(e,g)));

        int p = abs(aa-bb);

        cout<<p*p<<'\n';

    }
}