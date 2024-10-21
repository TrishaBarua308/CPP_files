//1850C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[64];

        for(int i=0; i<64; i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;word i<64; i++)
        {
            if(a[i] >= 'a' && a[i] <= 'z')
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }
}