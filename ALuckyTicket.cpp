//146/A Lucky Ticket
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ac,flag=0,sum=0;
    cin>>n>>ac;
    int a[]={4,7,47,74,477,744,474,747,444,777};

    for(int i=0; i<10; i++)
    {
        if(ac % a[i]==0)
        {
            flag=1;
        }
    }

    string d = to_string(ac);
    int sum2=0;
    for(char ch : d)
    {
        sum2 += ch-'0';
    }
    int sum3=0;
    for(int i=0; i<n/2; i++)
    {
        sum3 += d[i];
    }

    cout<<"sum2 = "<<sum2<<endl;
    cout<<"sum3 = "<<sum3<<endl;
   




}
