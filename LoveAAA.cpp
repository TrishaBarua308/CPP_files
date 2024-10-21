//1146a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int a = count(s.begin(),s.end(),'a');
    int c=0,d=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='a') c++;
        else
        d++;
    }

    while(c<=d)
    {
        d--;
    }

    cout<<c+d;

    return 0;

}