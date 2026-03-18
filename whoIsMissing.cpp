#include<bits/stdc++.h>
#define optimize ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize;
    int n;  cin>>n;
    int d = 4*n-1;
    
    vector<int> ans(n+1,0);
    
    for(int i=0; i<d; i++) 
    {
        int x;
        cin>>x;
        ans[x]++;
    }
    
    for(int i=1; i<=n; i++) 
    {
        if(ans[i] == 3)
        {
            cout<<i<<endl;
            break;
        }
   }

    
    return 0;
    
}