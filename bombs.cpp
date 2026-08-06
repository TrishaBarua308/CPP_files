// bombs
#include<bits/stdc++.h>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();
    int r,c;   cin>>r>>c;
    char a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if('1'<=a[i][j] && a[i][j]<='9')
            {
                int power = a[i][j]-'0'; // bomb in int
                
                for(int i2=0; i2<r; i2++)
                {
                    for(int j2=0; j2<c; j2++)
                    {
                        if(a[i2][j2]=='#')
                        {
                            int dist = abs(i-i2) + abs(j-j2);
                            
                            if(dist <= power)
                            {
                                a[i2][j2]='.';
                            }
                        }
                    }
                }
                a[i][j]='.';
            }
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

}