// 1385B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(2 * n);

        for(auto &i : v)
        {
            cin >> i;
        }

        unordered_set<int> track; // set for unique elements
        vector<int> vvv;

        for(auto &i : v)
        {
            if (track.find(i) == track.end()) // if it finds null
            {
                track.insert(i);
                vvv.push_back(i);
            }
        }

        for(auto &i : vvv)
        {
            cout << i << " ";
        }

        cout << '\n';
    }
}