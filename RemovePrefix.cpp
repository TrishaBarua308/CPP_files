#include<bits/stdc++.h> // from youtube ☹
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t; cin>>t;

    while(t--)
    {
        int n,count=0; cin>>n;

        vector<int> v(n);

        for(int i=0; i<n; i++)
         { 
            cin>>v[i];
         }

         set<int> s;

         for(int i=n-1; i>=0; i--)
         {
            s.insert(v[i]);
            count++;

            if(count>s.size()) break;//cause set cant take double value,and it will stop,but wount not

         }
         cout<<n-s.size()<<endl;

        
    }
}