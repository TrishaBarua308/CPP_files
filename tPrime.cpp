#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

const int MAXN = 1e6+10;

vector<int> numDivisors(MAXN, 0);

void precomputeDivisors() {
       numDivisors[0]=numDivisors[1]=1;//not prime 
    for (int i = 2; i < MAXN; i++) {
        for (int j = 2*i; j < MAXN; j += i) {
            numDivisors[j]=1;
        }
    }
}

int main() {
    precomputeDivisors();

    int p;
    cin >> p;
    ll a[p];
    for (int i = 0; i < p; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < p; i++) {
        ll ans = sqrt(a[i]);

        if (ans*ans==a[i] && numDivisors[ans]==0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}