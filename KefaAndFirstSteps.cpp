#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, count=1,max=1; 
    cin>>n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    for(int i=0; i<n-1; i++)
    {
        if(v[i] <= v[i+1])
        {
            count++;
            if(max < count)
            {
                max = count;
            }
        }
        else
        {
            count=1;
        }
    }
    
    cout<<max<<'\n';
    
    
    return 0;
}