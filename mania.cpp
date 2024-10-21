#include<bits/stdc++.h>//2009b
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;

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

        
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[n-i-1]<<" ";
        }

        cout<<endl;

    }

    

    return 0;
}