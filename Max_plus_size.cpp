//2019a
#include<bits/stdc++.h>
#define optimize() ios_base :: sync_with_stdIo(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;   cin>>n;
        int a[n]; 
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n%2==0)
        {
            cout<<*max_element(a,a+n) + (n/2)<<endl;
        }
        else
        {
            for(int i=0; i<n; i+=2 )
            {
                v.push_back(a[i]);
            }
            cout<<*max_element(v.begin(), v.end()) + ((n/2)+1) <<endl;
        }
    }

    return 0;
}