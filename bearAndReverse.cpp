//bear and reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,L_time=0,L_point=0,R_time=0,R_point=0;
    cin>>n>>c;

    int a[n],t[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
    }

    for(int i=0; i<n; i++)
    {
        L_time += t[i];
        L_point += max(0,(a[i]-c*L_time));

        R_time += t[n-i-1];
        R_point += max(0,(a[n-i-1]-c*R_time));
    }


    if(L_point > R_point)
    {
        cout<<"Limak";
    }
    else if(R_point > L_point)
    {
        cout<<"Radewoosh";
    }
    else
    {
        cout<<"Tie";
    }



    return 0;
}