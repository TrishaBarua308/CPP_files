#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;  cin>>h>>w; 
    char a[h][w],  b[h][w];
    
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>b[i][j];
        }
    }
    
    int flag=0;
    
    for(int s=0; s<h; s++)
    {
        for(int t=0; t<w; t++)
        {
            int flag2=1; 
            for(int i=0; i<h; i++)
            {
                for(int j=0; j<w; j++)
                {
                    int current = a[(i+s)%h][(j+t)%w];
                    if(current != b[i][j])
                    {
                        flag2=0;
                    }
                }
            }
            
            if(flag2==1)
            {
                flag=1; 
            }
            
        }
    }
    
    if(flag) cout<<"Yes\n";
    else     cout<<"No\n";
    
    
    return 0;
    
    
}





