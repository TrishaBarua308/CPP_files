//1954c
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string x,y;
        cin>>x>>y;

        int d = x.length();

        for(int i=0; i<d; i++)
        {
            if(x[i] < y[i])
            {
                swap(x[i], y[i]);
                break;
            }

            for(int j=i+1; j<d; j++)
            {
                if(x[j] > y[j])
                {
                    swap(x[j],y[j]);
                }
            }
            
        }

        
        cout<<x<<endl;
        cout<<y<<endl;

    }

    return 0;
    
}