#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    int people[t], time[t];
    for(int i=0; i<t; i++)  cin>>people[i]>>time[i];
    int ans=0;
    for(int mtime=0; mtime<24; mtime++){
        int total=0;
        for(int b=0; b<t; b++){
            int current = time[b] + mtime;
            if(current>24) current -=24;
            if(current>=9 && current<18) total += people[b];
        }
        ans = max(ans,total);
    }
    cout<<ans;

    return 0;
}