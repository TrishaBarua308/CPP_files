//1858/A
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t ;
  cin >> t;
  while (t--)
	{
        int a,b,c;
        cin>>a>>b>>c;
        //float d = ceil(c/2.0);
        if(c%2==1) a++;

        cout<<((a>b)?"First":"Second")<<endl;
    }

    return 0;
}