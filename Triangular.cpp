#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "YES" << '\n';
        return 0;
    }

    vector<int> v;
    int sum = 0;

    for (int i = 1; sum<n; i++)
    {
        sum += i;
        v.push_back(sum);
    }

    /*for (const &i : v)
    {
        cout << i << " ";
    }
    cout << endl;*/
    

     for (const &i : v)
    {
        if (find(v.begin(),v.end(),n) != v.end())
        {
            cout << "YES" << '\n';
            return 0;
        }
        else
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
}
