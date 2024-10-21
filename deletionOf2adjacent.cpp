//1650a
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t ;
  cin >> t;
  while (t--)
	{
	  int count = 0;
	  char ch;
	  string s;
	  cin>>s>> ch;
		
	  for (int i = 0; i < s.length(); i=i+2)
		{
            if(s[i]==ch)
            count=1;
		}

        cout<<(count?"YES":"NO")<<endl;
	}

  return 0;
}
