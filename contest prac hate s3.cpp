#include <bits/stdc++.h>//d.multiplication table
using namespace std;
int main()
{
       int n,x;
      cin>>n>>x;

      int Count=0,i,j;
    for(i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<= n)
        {
            Count++;
        }
    }
    cout<<Count;

}
