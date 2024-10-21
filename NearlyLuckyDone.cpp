//nearly lucky done
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    ll count=0;
  
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='7' || s[i]=='4')
        {
            count++;
        }
    }
  

    if(count==4 || count==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    
    
}