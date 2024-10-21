#include<bits/stdc++.h>
using namespace std;
int sum(int a[], int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return a[n-1]+sum(a,n-1);
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int d = sizeof(a)/sizeof(a[0]);

    cout<<"Sum = "<<sum(a,d);
}