#include<bits/stdc++.h>//228A
using namespace std;
int main()
{
    vector<int> v;

    int c=0,x;
    for(int i=0; i<4; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(int i=0; i<3; i++)
    {
        if( v[i]==v[i+1] )
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}