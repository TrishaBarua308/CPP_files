#include<bits/stdc++.h>
#define ll long long
#define optimize ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    optimize;

    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        bool flag = false;

        if(a < b && c<d && a<c && b<d)
        {
            flag = true;
        }
        else
        {
            for(int i = 0; i < 4; i++)
            {
                int temp = a;
                a=c;
                c=d;
                d=b;
                b = temp;

                if(a < b && c<d && a<c && b<d)
                {
                    flag = true;
                    break;
                }

            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}