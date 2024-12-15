#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define endl '\n'
using namespace std;

int main() {
    optimize();

    int t;   
    cin >> t;

    while (t--) {
        ll m, a, b, c, sum = 0;  
        cin >> m >> a >> b >> c;
        ll n = 2 * m;  

        ll row1 = min(m,a);
        ll row2 = min(m,b);
        cout << min(n, row1+row2+c) << endl;
    }

    return 0;
}
