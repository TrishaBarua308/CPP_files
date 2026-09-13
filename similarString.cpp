#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n; string f,t;  cin>>n>>f>>t;

   for(int i=0; i<n; i++)
   {
    if(f[i]=='0') f[i]='o';
    if(f[i]=='1') f[i]='l';

    if(t[i]=='0') t[i]='o';
    if(t[i]=='1') t[i]='l';
   }
   // cout<<f<<" "<<t<<endl;
   if(f==t) cout<<"Yes";
   else cout<<"No";

    return 0;
}