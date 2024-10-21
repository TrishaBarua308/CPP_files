// 1080b
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
int main()
{
    optimize();
    int t;   cin >> t;

    while (t--)
    {
        ll l, r, first=0,second=0;  cin >> l >> r;

        if((l-1)%2==0) first = (l-1)/2;
        else first = -(l)/2; // have to delete previous ele

        if(r%2==0) second = r/2;
        else second = -(r+1)/2;

        // cout<<"first = "<<first<<endl;
        // cout<<"second = "<<second<<endl;

        cout<<second-first<<endl;

        
    }

    return 0;
}