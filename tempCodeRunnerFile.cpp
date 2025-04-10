#include<bits/stdc++.h>
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    
    int inp;  cin>>inp;
    vector<int> v;
    
    int count=0;
    
    for(int i=1; i*i<=inp; i++)
    {
        count++;
        v.push_back(i*i);   
    }
    
    cout<<count<<endl;
    for(int i=0; i<v.size(); i++)  cout<<v[i]<<" ";
}





