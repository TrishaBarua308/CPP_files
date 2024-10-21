//1968c
//assembly via remainders
#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        ll n;
        cin >> n;
        ll a[n], temp[n]; 
        for(int i = 1; i < n; i++) 
        { 
            cin >> a[i];
        }
        
        temp[0] = 1000;
        for(int i = 1; i < n; i++) 
        { 
            temp[i] = temp[i-1] + a[i];
        }
        
        for(int i = 0; i < n; i++) 
        {
            cout << temp[i] << " ";
        }
        
        cout << endl;
    }
    return 0;
}