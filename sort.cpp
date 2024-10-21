// 1996c--sort
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        while (q--)
        {
            int l, r, count = 0;
            cin >> l >> r;

            string newA = a.substr(l - 1, r);
            string newB = b.substr(l - 1, r);

            sort(newA.begin(), newA.end());
            sort(newB.begin(), newB.end());

            set<char> A(newA.begin(), newA.end());
            set<char> B(newB.begin(), newB.end());

            for (auto ch : A)
            {
                if (B.find(ch) != B.end())
                {
                    count++;
                }
            }

            if (A == B && l==1 && r==n)
            {
                cout << 0 << '\n';
            }
           
            else
            {
                cout << "count=" << count << endl;
                cout << (r - l + 1) - count << '\n';
            }
        }

        cout<<endl;
    }


    return 0;
}