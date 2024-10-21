//A. Jagged Swaps
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    //optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;   cin>>n;
       vector<int> a(n),temp(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        cout<<((a[0]==1)?"YES":"NO")<<endl;
    }

    return 0;
}