#include<bits/stdc++.h>//1800A
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;

        for(int i=0; i<n; i++)
        {
            s[i] = tolower(s[i]);
        }

        s.erase(unique(s.begin(),s.end()),s.end());
        //cout<<"After erasing : "<<s<<endl;

        if(s=="meow")
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }



    }
}