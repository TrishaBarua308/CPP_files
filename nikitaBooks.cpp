#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(); cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    optimize();

    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int total_sum = 0;
        int req_sum = 0;

        for(int i=0; i<n; i++)
        {
            total_sum += a[i];
            req_sum += i ;

            if(total_sum < req_sum)
            {
                cout<<"No"<<endl;
                break;
            }
            else if(i>0 && ((a[i-1]>=a[i]) && (a[i-1] <=1) ))
            {
                cout<<"No"<<endl;
                break;
            }
            else
            {
                cout<<"yes"<<endl;
                break;
            }

            
        }

    }
    
    return 0;
}