// 1475A
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    optimize();
     int t;  cin >> t;

    while (t--)
    {
        int flag = 0;
        ll n;  cin >> n;

        while (n > 1 && n % 2 == 0)
        {
            n /= 2;
        }

        if(n==1) cout<<"NO"<<endl;// even 
        else cout<<"YES"<<endl;
    }

    return 0;
}