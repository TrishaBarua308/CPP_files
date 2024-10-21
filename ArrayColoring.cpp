//1857A
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, sum;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sum=0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }

        if(sum%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }



    return 0;
}