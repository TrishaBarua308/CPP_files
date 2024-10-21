// A. Compare T-Shirt Sizes
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "=\n";
            continue;
        }
        if (a.back() != b.back())
        {
            if (a.back() > b.back())
            {
                cout << "<\n";
            }

            else
            {
                cout << ">\n";
                
            }
        }
        else
        {
            if (a.back() == 'S')
            {
                if (a.back() < b.back())
                {
                    cout<<">\n";
                }
                else
                {
                    cout<<"<\n";
                }
            }
            else//L and M
            {
                if(a.back() > b.back())
                {
                    cout<<">\n";
                }
                else
                {
                    cout<<"<\n";
                }
            }
           
        }
    }
}
