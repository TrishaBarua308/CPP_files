//158B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s,c=0,otherSum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        otherSum += a[i];
    }
    sort(a,a+n);
    
    for(int i=0; i<n; i++)
    {
        if(a[i]==3 || a[i]==4)
        {
            c++;
        }
        else

        {
            s =  a[i] + a[i+1];
            if(s<= 4)
            {
                c++;
            }
            i=i+1;
        }
    }
    
        if(c!=0)
        {
            cout<<c<<endl;
        }
        else if(otherSum%4==0)
        {
            cout<<otherSum/4<<endl;
        }
    
    return 0;
}