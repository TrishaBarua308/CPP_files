//Quintomania
#include<bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;    cin>>t;

    while(t--)
    {
        int n,flag;    cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(int i=0; i<n-1; i++)
        {
            int z = abs(a[i]-a[i+1]);

            if(z==5 || z==7)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
       // cout<<"flag = "<<flag<<endl;
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}