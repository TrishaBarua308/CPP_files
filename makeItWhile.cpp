//1927A
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
        
        
        while(n)
        {
            if(s[0]=='W')
            {
              s.erase(s.begin());
            }
        else if(s.back()=='W')
           {
            s.pop_back();
           }
        else
           {
            break;
           }
        }

        cout<<s.length() <<endl;
    }
    return 0;
}