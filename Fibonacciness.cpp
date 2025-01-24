//A. Fibonacciness
#include<bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t; cin>>t;

    while(t--)
    {
        ll a[4];  cin>>a[0]>>a[1]>>a[2]>>a[3];
        set<ll> st;
        st.insert(a[0]+a[1]);
        st.insert(a[2]-a[1]);
        st.insert(a[3]-a[2]);

        cout<<4-st.size()<<endl;
    }

    return 0;
}