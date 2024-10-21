//1993/A
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        
        int a = count(s.begin(),s.end(),'A');
        int b = count(s.begin(),s.end(),'B');
        int c = count(s.begin(),s.end(),'C');
        int d = count(s.begin(),s.end(),'D');

        cout<<min(a,n)+min(b,n)+min(c,n)+min(d,n)<<endl;
    }

    return 0;
}