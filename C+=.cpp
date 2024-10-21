// 1368A
// c+=
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, k, count = 0, count2 = 0;
        cin >> a >> b >> k;

        while(a <= k && b<= k)
        {
            if (a>=b)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }

            count++;
        }
        cout << count << endl;
    }
}