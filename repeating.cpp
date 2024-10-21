// repeating cipher
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> a;
    string s;
    cin >> s;

    for (int i = 1; ;i++)
    {
        int pos = ((i*(i+1))/2)-1;
        if(pos>=n)
        {
            break;
        }
        else
        a.push_back(pos);
    }

    
    for (int i = 0; i <a.size(); i++)
    {
        cout << s[a[i]];
    }
}