// 1873
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0;

        char a[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
	    {1,2,2,2,2,2,2,2,2,1},
	    {1,2,3,3,3,3,3,3,2,1},
	    {1,2,3,4,4,4,4,3,2,1},
	    {1,2,3,4,5,5,4,3,2,1},
	    {1,2,3,4,5,5,4,3,2,1},
	    {1,2,3,4,4,4,4,3,2,1},
	    {1,2,3,3,3,3,3,3,2,1},
	    {1,2,2,2,2,2,2,2,2,1},
	    {1,1,1,1,1,1,1,1,1,1}
        };

        int n = 10;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='X')
                {
                    sum += a[i][j];
                }
            }
        }
        
        cout<<sum<<'\n';

    }
    return 0;
}
