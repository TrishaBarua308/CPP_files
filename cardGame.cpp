// 1999b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d,p=0;
        cin>>a>>b>>c>>d;

        if(a>c && b>=d || a>=c && b>d)
        {
            p+=2;
        }
        if(a>d && b>=c || a>=d && b>c)
        {
            p+=2;
        }
         
       

        cout<<p<<'\n';
    }

    return 0;
}