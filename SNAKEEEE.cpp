#include<bits/stdc++.h>//510A
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=m; j++)
        {
            if(i%2==0)
            {
                if(i%4==0 && j==1)
                {
                    cout<<"#";
                }
                else
                {
                    if(j==m && i%4!=0)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }
            else cout<<"#";
        }
        cout<<endl;
    }
}