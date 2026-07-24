// vacation together

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    int n,d;
    char temp;   cin>>n>>d;
    // cin>>temp;
    char a[n][d];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<d;j++)
        {
            cin>>a[i][j];
        }
        //cin>>temp;
    }

    int free[d];

    for(int j=0; j<d; j++)
    {
        int got=0; 
        for(int i=0; i<n; i++)
        {
            if(a[i][j]=='x')
            {
                got=1;
                break;
            }
        }

        if(got==1) free[j]=0; //x
        else free[j]=1; //o
 
    }

    //for(int j=0; j<d; j++) cout<<free[j]<<" ";

    int ans=0;

    for(int j=0; j<d; j++)
    {
        if(free[j]==1)
        {
            int len=1;
            for(int i= j+1; i<d; i++)
            {
                if(free[i]==1) len++;
                else break;
            }

            ans = max(ans,len);
        }
    }

    cout<<ans<<endl;




}