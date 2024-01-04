#include<bits/stdc++.h>//square and push
using namespace std;
int main()
{
    double r,area_circle,area_square,area_shade;
    int t;
    cin>>t;
    for(int i =1; i<=t; i++)
    {
        cin>>r;
        area_circle= 2*acos(0.0)*r*r;
        area_square = pow((r+r),2);

        area_shade = area_square - area_circle;

        cout<<fixed;
        cout<<setprecision(2);
        cout<<"Case "<<i<<": "<<area_shade<<endl;
    }
}

