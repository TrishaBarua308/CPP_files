// beat the odds
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;

        vector<int> v(n);

        for (int &i : v)
        {
            cin >> i;
        }

        int sum =0;

        for(int &i : v)
        {
            if(i%2==0)
            {
                count++;
            }
        }
       
        cout<<min(count, n-count)<<'\n';


    }
}