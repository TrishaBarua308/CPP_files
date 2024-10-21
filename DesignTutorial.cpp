//472A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,flag;
    
    cin>>n;
    a = n/2; 
    b = n-a; 
    //cout<<a<<" "<<b<<endl<<endl;
      while(1)
      {
        if((a%2==0 || a%3==0) && (b%2==0 || b%3==0))
        {//composite
            cout<<a<<" "<<b<<endl;
            break;
        }
        else
        {//prime
            a++;
            b--;
        }
      }

    return 0;
}