//200B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &i : v)
    {
        cin>>i;
    }

    int sum = accumulate(v.begin(), v.end(),0);

    cout<<(long double)sum/n;
}