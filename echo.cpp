#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s; cin >> n >> s;
    string temp((2 * n), ' ');
    int j=0; 

    for (int i = 0; i < (2 * n) - 1; i+=2)
    {
        temp[i] = s[j];
        temp[i + 1] = s[j];
        j++;

        
    }
    cout<<temp;

    return 0;
}