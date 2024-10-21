//379A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a;
    
    while((a/b) > 0)
    {
        sum += (a/b) ;
        a = (a/b) + (a%b);
    }

    cout<<sum<<endl;
}