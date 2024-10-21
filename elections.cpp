//1593A
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,aa,bb,cc;
        cin>>a>>b>>c;

        int max = a;
        if(max<b)
        {
            max = b;
        }
        if(max<c)
        {
            max = c;
        }
        aa = (a>b && a>c) ? 0 : max-a+1;
        bb = (b>c && b>a) ? 0 : max-b+1;
        cc = (c>a && c>b) ? 0 : max-c+1;

        cout<<aa<<" "<<bb<<" "<<cc<<endl;

        
    }


    return 0;
}

