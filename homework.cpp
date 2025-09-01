//2132A
#include<bits/stdc++.h>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;  cin>>t;

    while(t--)
    {
        int n, m;  cin>>n;
        vector<char> s1(n);

        for( auto &i : s1)  cin>>i;

        cin>>m;
        vector<char> s2(m);
        for( auto &i : s2)  cin>>i;

        vector<char> c(m), ans = s1;
        for( auto &i : c)  cin>>i;

        for(int i=0; i<m; i++)
        {
            if(c[i]=='D')
            {
                ans.push_back(s2[i]);
            }

            else if(c[i]=='V')
            {
               ans.insert(ans.begin(), s2[i] );
            }
        }

        for( auto x: ans)  cout<<x;
        cout<<endl;

    }
}