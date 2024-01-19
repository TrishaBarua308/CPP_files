#include<bits/stdc++.h>//996A
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[]={100, 20, 10, 5, 1}, c=0;
    for(int i=0; i<5; i++)
    {
        c = c + n/a[i];
        n = n % a[i];
    }
    cout<<c<<endl;
}