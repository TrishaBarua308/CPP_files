// 556A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    
    int c0=0,c1=0;
    sort(s.begin(), s.end());
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            c0++;
        }
        if(s[i]=='1')
        {
            c1++;
        }
    }

    cout<<abs(c0-c1)<<endl;



    return 0;
}