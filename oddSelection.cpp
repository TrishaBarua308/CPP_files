//1363A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x,even=0,odd=0;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 ==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if((even==0 && x%2==0) || (odd%2==0 && x==n) || odd==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}