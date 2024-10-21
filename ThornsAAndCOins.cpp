//1932/A thorns and coins
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, count=0;
        cin>>n;
        string s;
        cin>>s;

        for(int i=1; i<n; i++)
        {

            if( s[i]=='@' )
            {
                count++;
            }

            if( s[i]=='*' && s[i+1]=='*' )
            {
                break;
            }

            else
            {
                continue;
            }

        }


        cout<<count<<endl;

    }


    return 0;
}
