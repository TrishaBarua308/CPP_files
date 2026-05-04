#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define ft for(int i=0; i<3; i++)
#define fm for(int j=0; j<3; j++)
using namespace std;
int main()
{
    optimize();
    int a,b;   cin>>a>>b;

    if( (a==3 && b==4) || (a==6 && b==7) ) cout<<"No\n";
    else if(a+1==b) cout<<"Yes\n";
    else cout<<"No\n";

//    if( (( a!=3 && b!=4) || (a!=6 && b!=7) ) && (a+1==b) ) cout<<"Yes\n";
//    else cout<<"No\n";

   return 0;
    
}