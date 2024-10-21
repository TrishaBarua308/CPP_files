//1907/A
//rook
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t ;
  cin >> t;
  while (t--)
	{
        char s; int p;
        cin>>s>>p;
        char alp[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        for(int i=0; i<8; i++)
        {
            if(alp[i] == s)
            {
                continue;
            }
            else
            {//a5 b5
                cout<<alp[i]<<p<<endl;
            }
        }

        for(int j=1; j<=8; j++)
        {
            if(j == p)
            {
                continue;
            }
            else//d1 d2 d3 
            {
                cout<<s<<j<<endl;
            }
        }
    }
}