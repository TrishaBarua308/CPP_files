#include <bits/stdc++.h>
using namespace std;
#define optimize()                   \
    ios_base::sync_with_stdio(true); \
    cin.tie(0);                      \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c;   cin>>a>>b>>c;
        cout<<max(abs(a+c-b),abs(a-b))<<endl;
    }

    return 0;
}