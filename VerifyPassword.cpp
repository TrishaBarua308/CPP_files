//1976/A
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        
        string temp = s;
        sort(s.begin(), s.end());

        cout<<((s==temp)?"YES":"NO")<<endl;
    }

    return 0;
}