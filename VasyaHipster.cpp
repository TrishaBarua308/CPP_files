#include<bits/stdc++.h>//581A
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b<<" "<<(abs(a-b))/2<<endl;
    }
    else if(a<=b)
    {
        cout<<a<<" "<<(abs(a-b))/2<<endl;
    }
    return 0;

}