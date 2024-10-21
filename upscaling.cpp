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

        char a[2 * n][2 * n];

        for(int i=0; i<2*n; i++)
        {
            for(int j=0; j<2*n; j++)
            {
                int res = (i/2)+(j/2);

                if( res %2 == 0 )
                {
                    cout<<'#';
                }
                else
                {
                    cout<<'.';
                }
            }
            cout<<'\n';
        }



    }
}