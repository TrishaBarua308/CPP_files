//466A====not done

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int n,m,a,b;  cin>>n>>m>>a>>b;
    float f = (float)b/m;
    
    float cc = min((float)a,f);
    
    float ans = ceil(n*cc);

   
        cout<<(int)ans;
    
   

    return 0;
}