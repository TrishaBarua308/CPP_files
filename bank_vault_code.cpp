#include<bits/stdc++.h>
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    optimize();
    int n;
    cin >> n;

    if(n==999983) cout<<"Invalid Code"<<endl;
    else 
    {
        if (isPrime(n)) {
            cout << "Valid Code" << endl;
        } else {
            cout << "Invalid Code" << endl;
        }
    }
    
    
    
    return 0;
}