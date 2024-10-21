#include <bits/stdc++.h> //49a
using namespace std;
int main()
{
    string s;
    int flag=0;
    getline(cin, s);
    int d = s.length();

    for (int i = 0; i < d; i++)
    {
        s[i] = tolower(s[i]);
    }

    //cout<<"s = "<<s<<endl;

    //cout<<"d = "<<d<<endl;

    for (int i = d-1; i >= 0; i--)
    {
        if (s[i] >='a' && s[i] <='z' )
        {
           if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            {
                cout<<"YES"<<'\n';
                return 0;
            }
            else
            {
                cout<<"NO"<<'\n';
                return 0;
            }
        }
    }
    cout<<"NO"<<'\n';
    return 0;

    
}