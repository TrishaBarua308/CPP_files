//twice 2037A
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    //optimize();
    int t;   cin>>t;

    while(t--)
    {
        int n,count=0;   cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        sort( v.begin(), v.end() );
       
        for(int i=0; i<n-1;)
        {
            if(v[i]==v[i+1])
            {
                count++;
                i+=2;
            }
            else
            {
                i++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}