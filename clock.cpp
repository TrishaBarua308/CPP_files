//1950c
//clock
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t ;
  cin >> t;
  while (t--)
	{
        int h,m;
        char ch;
        cin>>h>>ch>>m;
        string s=" AM";
        if(h>=12)
        {
            h-=12;
            s=" PM";
        }
        if(h==0)
        {
            h=12;
        }

        cout<<(h>9?"":"0")<<h<<":"<<(m>9?"":"0")<<m<<s<<endl;

    }
        
       

    return 0;
}