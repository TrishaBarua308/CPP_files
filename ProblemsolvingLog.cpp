#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int n;   cin>>n;
        string s;   cin>>s;
        string temp = s;
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int ans=0;
        
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        //cout<<"TEMP = "<<temp<<endl;

        for(int i=0; i<temp.length(); i++)
        {
            for(int j=0; j<26; j++)
            {
                if(temp[i]==alpha[j])
                {
                    int c = count(s.begin(), s.end(),temp[i]);
                    //cout<<"COUNT = "<<c<<endl;
                    if(c>j)
                    {
                        ans++;
                        //cout<<"ANS = "<<ans<<endl;
                        
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}