//1352a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num,c=0;
    cin>>t;
    while(t--)
    {
        cin>>num;
        while(num%10!=0)
        {
            c++;
            //cout<<(num-(num%10))<<endl;
            num = num/10;
        }
        if(c==0)
        {
            cout<<"1"<<" "<<num<<endl;
        }
        else
        {
            cout<<c<<" "<<(num-(num%10))<<endl;
        }
    }

}