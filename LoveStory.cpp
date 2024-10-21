//1829A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1="codeforces", s2;
    while(t--)
    {
        cin>>s2;
        int count=0;
        for(int i=0; i<10; i++)
        {
            if(s1[i] != s2[i])
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}