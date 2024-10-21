//731A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x,sum=0;
    char initial = 'a';
    for(int i=0; i<s.length(); i++)
    {
        x = min(abs(initial-s[i]), 26-abs(initial-s[i]));
        sum += x;
        initial = s[i];
    }
    cout<<sum<<endl;
}