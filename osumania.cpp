#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;  cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char a[n][4];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<4; j++)
            {
                cin>>a[i][j];
            }
        }
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(a[i][j]=='#')
                {
                    v.push_back(j+1);
                }
            }
        }
        reverse(v.begin(), v.end());
        for(auto i : v) cout<<i<<" ";
        cout<<endl;

    }

}