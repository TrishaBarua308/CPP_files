#include<bits/stdc++.h>//486A
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int c=0;

        if((n%2)==0)
        {
        cout<<(n/2)<<endl;
        }

        else if((n%2)!=0)
        {
            cout<<"-"<<(n/2)+1<<endl;
        }    
    
}