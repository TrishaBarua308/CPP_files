//431a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],sum=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        int d = s[i]-'0';
        sum+= a[d-1];
    }

    cout<<sum<<endl;

    return 0;
}