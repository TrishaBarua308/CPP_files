#include <bits/stdc++.h>
#define optimize             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c, d, e, f, g, h, i;
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        cin >> g >> h >> i;
        char ans='.';

             if (a == b && b == c && a!='.')
            ans=a;
        else if (d == e && e == f && d!='.')
            ans=d;
        else if (g == h && h == i && g!='.')
            ans=g;
        else if (a == d && d == g && a!='.')
            ans=a;
        else if (b == e && e == h && b!='.')
            ans=b;
        else if (c == f && f == i && c!='.')
            ans=c;
        else if (a == e && e == i && a!='.')
            ans=a;
        else if (c == e && e == g && c!='.')
            ans=c;



        if(ans=='X' || ans=='O' || ans=='+') cout<<ans<<endl;
        else cout<<"DRAW\n";
    }
    return 0;
}