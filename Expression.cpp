#include<bits/stdc++.h>//479A
using namespace std;
int main()
{
    int a,b,c,max,p,q,r,s;
    cin>>a>>b>>c;
    p = (a+b)*c; 
    q = a*(b+c); 
    r = a*b*c; 
    s = a+b+c; 

    max = p;

    if (q > max) {
        max = q;
    }

    if (r > max) {
        max = r;
    }

    if (s > max) {
        max = s;
    }

    cout << max << endl;

    return 0;
}
