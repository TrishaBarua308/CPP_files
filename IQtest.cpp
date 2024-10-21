//25a
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int n,odd=0,even=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }

    //cout<<"even = "<<even<<endl;
    //cout<<"odd = "<<odd<<endl;
    for(int i=n-1; i>=0; i--)
    {
        if(odd>even)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
        else // even more
        {
            if(a[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;

}