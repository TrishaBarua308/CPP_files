#include <bits/stdc++.h> //144A
using namespace std;
int main()
{
    string s;
    cin >> s;
    int f = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            f++;
            if (f == 1)
               cout <<" ";
            i = i + 2; // again increasing in i++,            
              
        }
        else
        {
            cout << s[i];
            f=0;
        }
    }
}