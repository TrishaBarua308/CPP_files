#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define ft for(int i=0; i<r; i++)
#define fm for(int j=0; j<c; j++)
using namespace std;
int main()
{
    optimize();
    int r,c;  cin>>r>>c;
    int a[r][c];
    int ans[c][r];

    ft{
        fm{
            cin>>a[i][j];
            ans[j][i]=a[i][j];
        }
    }

    
    fm{
        ft{
            cout<<ans[j][i]<<" ";
        }
        cout<<endl;
    }
    
}