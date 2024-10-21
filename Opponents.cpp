// 688a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d,count=0, ans=0;
    cin >> n >> d;
    vector<int> v;
    string s;

    for (int i = 0; i < d; i++)
    {
        cin >> s;

        if(s.find('0') != string::npos)
        {
            count++;
        }
        else
        {
            count=0;
        }

        ans = max(ans,count);
    }

    
    
    cout << ans << '\n';

    return 0;
}
