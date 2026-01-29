// Candies for Nephews 2145A
#include<bits/stdc++.h>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    int t;      cin>>t;

    while(t--)
    {
        int n;     cin>>n;
        int count=0, temp=n;

        if(n%3==0)  cout<<0<<endl;
        else
        {
            while(temp%3!=0)
            {
                count++;
                temp++;
            }

            cout<<count<<endl;
        }
    }
}