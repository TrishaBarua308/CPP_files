// 2149 A ----Be positive
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;  cin>>t;
    while(t--)
    {
        int n;   cin>>n;
        
        int a[n];
        
        for(int i=0; i<n; i++)  cin>>a[i];
        
        int count_0=0, count_neg1=0;
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==0) count_0++;
            else if( a[i]== -1 ) count_neg1++;
        }
        
        cout<<((count_neg1%2!=0)?(count_0+2):count_0)<<endl;
    }
    
    return 0;
}

