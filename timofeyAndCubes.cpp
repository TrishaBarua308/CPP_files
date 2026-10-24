#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin>>n;
    int a[n];
    int temp[n];
    for(int i=0; i<n; i++)  cin>>a[i];
    reverse(a,a+n);
    for(int i=0; i<=n-i-1; i++)
    {
        if(i%2==0)
        {
            swap(a[i], a[n-i-1]);
        }
    }
    reverse(a,a+n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}