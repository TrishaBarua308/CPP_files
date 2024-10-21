#include<bits/stdc++.h>
using namespace std;
map<char, int> counter(string s)
{
    map<char, int> countCh;
    for(char ch : s)
    {
        countCh[ch]++;
    }
    return countCh;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        map<char,int> countCh = counter(s);
        int a[countCh.size()],i=0;
        for(auto pair : countCh)
        {
            a[i] = pair.second;
            i++;
        }

        /*for( int i=0; i<countCh.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;*/

        int count=0,sum=0;
        for( int i=0; i<countCh.size(); i++)
        {
            if(m<=a[i])
            {
                count++;
            }

        }
        //cout<<count<<endl;
        cout<<((7*m)-count)/m<<endl;
    }



}
