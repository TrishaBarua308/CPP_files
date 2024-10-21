//good contest
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;

    while(n--)
    {
        string s;
        int b,a;
        cin>>s>>b>>a;

        if(b>=2400 && a>b) 
        {
            count++;
            break;
        }
    }
    
    

    if(count >=1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}