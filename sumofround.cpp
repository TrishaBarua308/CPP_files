//1352a
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define endl '\n'
int main()
{
    //optimize();
    int t;  cin>>t;

    while(t--)
    {
        int n,count=0;  cin>>n;
        vector<int> v;
        int s=1, dgt = (int)log10(n)+1;
        //cout<<"digit = "<<dgt<<endl;

        while(n>0)
        {
            int rem = n%10;
            if(rem!=0) {v.push_back(rem*s); }
            n /= 10;
            s *= 10;
            count++;
        }

        cout<<v.size()<<endl;
        for(auto i : v)
        {
            cout<<i<<" ";
           
        }
        cout<<endl;
    }
    
    
}