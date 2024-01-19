//723a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[3];
    for(int i=0; i<3; i++)
    {
        cin>>x[i];
    }
    sort(x,x+3);
    cout<<abs(x[0]-x[1])+abs(x[1]-x[2])<<endl;
}