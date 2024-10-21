// 1760c//unsolved
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b+n, greater<int>());

        /*for (int i = 0; i < n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;*/

        for (int i = 0; i < n; i++)
        {
            //for (int j = 0; j < n; j++)
            {
                if (a[i] != b[i])
                {
                    cout << a[i] - b[i] << " ";
                }
                /*else if (a[i] == b[j])
                {
                    j--;
                }*/
            }
        }

        //cout<<endl;
    }
    return 0;
}