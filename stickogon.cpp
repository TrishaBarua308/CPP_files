// 1957/A stickogon
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0, ans = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        
        /*cout<<"mp=";
        for (auto it = mp.begin(); it!= mp.end(); ++it)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }*/

         for (auto it = mp.begin(); it!= mp.end(); ++it)
        {
            auto tt = it->second;
            if(tt >=3)
            {
                count+=(tt/3);
            }
        }


        cout<<count<<endl;
    }

    return 0;
}