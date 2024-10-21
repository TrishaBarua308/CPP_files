//1462/C
// Unique Number
#include<bits/stdc++.h>
using namespace std;
int Sum(int n)
{
    if(n>=0 && n<=9)
    {
        return n;
    }
    else if(n>9 && n<46)
    {
        return Sum(n-9)*10+9;
        n--;
        
    }
    else
    {
        return -1;
    }
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        cout<<Sum(n)<<endl;
    }


    return 0;
}