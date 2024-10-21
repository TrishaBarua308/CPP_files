//1915B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[3][3];
        int c1,c2,c3;
        c1=c2=c3=0;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(a[i][j]=='A')
                {
                    c1++;
                }
                if(a[i][j]=='B')
                {
                    c2++;
                }
                if(a[i][j]=='C')
                {
                    c3++;
                }
            }
        }

        if(c1==2)
        {
            cout<<'A'<<endl;
        }
        else if(c2==2)
        {
            cout<<'B'<<endl;
        }
        else
        {
            cout<<'C'<<endl;
        }

        
    }

    return 0;
}