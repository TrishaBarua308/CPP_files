//1296A  
//Round Down the Price
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    cout<<fixed<<setprecision(0);
    //fixed = force the output to be in fixed point notation rather than scientific notaion
    //setprecision = no decimal places are shown, effectively rounded the nearest int
    
    while(t--)
    {
        int n;
        cin>>n;

        int d = log10(n)+1;

        cout<<n-pow(10,d-1) <<'\n';
        
    }
}