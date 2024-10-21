#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char d ;
    cin>>d;
    for (int i = 0; i < s.length(); i++)
    {
        
            if (s[i] == d)
            {
                
                cout << '\n';
            }

       else
        {
            cout<<s[i];
        }
        
    }

    return 0;
}

// i love cats,dogs.kitten#