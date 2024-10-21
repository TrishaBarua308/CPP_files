// 755A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 1000; i++)
    {
        int d = (n * i) + 1;
        for (int j = 2; j < d; j++)
        {
            if (d % j == 0)
            {
                cout << i;
               return 0;
            }
        }
    }

    
}