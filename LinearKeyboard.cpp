// 1607 A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string all,s;
        cin>>all>>s;

        vector<int> res;
        int sum=0;

        for(auto &i : s)
        {
            auto it = find(all.begin(), all.end(),i);

            if(it != all.end())
            {
                res.push_back(distance(all.begin(),it));
            }
        }

        for(int i=1; i<res.size(); i++)
        {
            sum += abs(res[i]-res[i-1]);
        }

        cout<<sum<<'\n';

    }
}
