#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t; cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        vector<int> v;

        int x=10;
        while(n!=0)
        {
            int r = n % x ;
            n = n - r; 
            x *= 10;
            if(r!=0) v.push_back(r);
        }

        cout<<v.size()<<endl;
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }  

    return 0;
}