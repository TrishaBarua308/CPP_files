//1873B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long temp, count=0;

        for(int i=1; i<10; i++)
        {
            temp = i;
            while(temp <= n)
            {
                count++;
                temp = (temp*10) + i ;//1 to 11, then 111 then 1111.....
            }
        }

        cout<<count<<endl;
    }
}