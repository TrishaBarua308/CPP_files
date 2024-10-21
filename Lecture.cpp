#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() 
{
    int n,m,p,r;
    cin>>n>>m;
    char s[n][25], a[m][25], b[m][25];
    for(int i=0; i<m; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        for(int j=0; j<m; j++)
        {
            if(strcmp(s[i], a[j]) == 0)
            {
                 p = strlen(a[j]), r = strlen(b[j]);
                if(p <= r)
                {
                    cout<<a[j]<<" ";
                }
                else
                {
                    cout<<b[j]<<" ";
                }
            }
        }
    }
    cout<<endl;


    return 0;
}