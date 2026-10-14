// #include<bits/stdc++.h>
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;

// int main()
// {
//     optimize();

//     int n, x;
//     cin >> n >> x;

//     int a[n-1];

//     for(int i=0; i<n-1; i++)   cin >> a[i];

//     int ans=0;

//     sort(a,a+n-1);

//     for(int i=1; i<n-2; i++)
//     {
//         ans += a[i];
//     }

//     int d = x-ans;

//     if(d<=0) cout<<0;
//     else if(d<=100) cout<<d;
//     else cout<<-1;

//     return 0;
//     // pending
// }


#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    optimize();

    int n, x;
    cin >> n >> x;
    int a[n];
    int mn, mx;
    for(int i=0; i<n-1; i++)  cin>>a[i];
    for(a[n-1]=0; a[n-1]<=100; a[n-1]++)
    {
        int sum=0; 
        for(int i=0; i<n; i++) 
        {
            sum+=a[i];
        }
        mn = *min_element(a,a+n);
        mx = *max_element(a,a+n);

        sum = sum-mn-mx;
        if(sum>=x) break;
    }
    if(a[n-1]>100) cout<<-1;
    else cout<<a[n-1];

    return 0;
}