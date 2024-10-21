//1367a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        for(int i=0; i<a.length(); i=i+2)
        {
            cout<<a[i];   
        }
        cout<<a[a.length()-1]<<endl;
    }
}