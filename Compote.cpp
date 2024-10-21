// 746/A
// Compote
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a, b, c, sum = 0;
    cin >> a >> b >> c;

    while(1)
    {
        if((a >= 1) && (b >= 2) && (c >= 4) )
        {
            sum += 7;
            a--;
            b-=2;
            c-=4;
        }
        else
        {
            break;
        }
    }

    cout << sum << '\n';
}