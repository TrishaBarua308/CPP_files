//2050A
//line breaks
#include<bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    optimize();

    int t;   cin>>t;

    while(t--)
    {
        int n,m,count=0, sum=0;   cin>>n>>m;
        vector<string> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            sum += a[i].length();
            if(sum<=m)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}