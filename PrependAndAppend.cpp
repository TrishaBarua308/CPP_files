//1791C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i=0,flag=0;
        cin>>n;
        string s;
        cin>>s;
        int j = n-1;
        while(i < (n/2) )
        {
            if((s[i]=='0' && s[j]=='1' ) || (s[j]=='0' && s[i]=='1'))
            {
              j--;
              i++;
              //cout<<"tum = "<<i<<endl;
              flag++;
            }
            else
            {
                break;
            }
        }

        if(flag == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<< n-(i*2) <<endl;
        }

    }

    return 0;
}
