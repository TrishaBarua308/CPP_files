//1873/D 
//1D Eraser
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int count=0,n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                count++;
                i += (k-1);
            }
        }

        cout<<count<<'\n';
        
    }
}