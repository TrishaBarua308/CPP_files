#include<bits/stdc++.h>//1703A
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(tolower(s[0])=='y'&& tolower(s[1])=='e' && tolower(s[2])=='s')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}