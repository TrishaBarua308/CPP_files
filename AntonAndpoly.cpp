#include<bits/stdc++.h>//785A
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            c += 4;
        }
        if(s=="Cube")
        {
            c += 6;
        }
        if(s=="Octahedron")
        {
            c += 8;
        }
        if(s=="Dodecahedron")
        {
            c += 12;
        }
        if(s=="Icosahedron")
        {
            c += 20;
        }

    }

    cout<<c<<endl;
}