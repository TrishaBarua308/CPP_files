#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;   cin >> t;
    while (t--)
    {
        int n;  cin >> n;
        int temp = n;

        if (n % 7 == 0)  temp = n;
        else
        {
            int v = n/10;
            int t = v*10;
            for(int i=t; i<(t+9); i++)
            {
                if(i%7==0)
                {
                    temp=i;
                }
            }
        }

        cout<<temp<<endl;
       
    }

    return 0;
}