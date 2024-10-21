//1703b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(), s.end()), s.end());

        string res( s.begin(), s.end());
        //cout<<"After erase = "<<res<<endl;

        cout<<(2*n) - (n-res.length())<<'\n'; 
    }

    return 0;
}