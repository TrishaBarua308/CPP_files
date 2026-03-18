#include<bits/stdc++.h>
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    int n;    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)  cin>>a[i];

    vector<int> v;

    for(int i=0; i<n-1; i++)
    {
        while(a[i]!=a[i+1])
        {
            if(a[i]<a[i+1])
            {
                v.push_back(a[i]++);
            }

            else if(a[i]>a[i+1])
            {
                v.push_back(a[i]--);
            }
        }
    }
    v.push_back(a[n-1]);

    for(auto x : v)  cout<<x<<" ";

    
}