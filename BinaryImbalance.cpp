//A. Binary Imbalance
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s; cin>>n>>s;
        int count1= count(s.begin(), s.end(), '1');
        int count0= count(s.begin(), s.end(), '0');
       
        cout<<((n==count1)?"NO":"YES")<<endl;
    }

    return 0;
}