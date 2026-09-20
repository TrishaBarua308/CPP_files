#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string temp = s;
        bool flag = false;
        int index=-1;

        for (int i = 0; i < n - 1; i++)
        {
            if(s[i]>s[i+1])
            {
                index=i;
                break;
            }
        }
        if (index==-1) s.pop_back();
        else s.erase(s.begin() + index);

        cout << s << endl;
    }
}