//112/A
//Petya and Strings
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    

    int d = s1.length();
    int flag = 0;

    for(int i=0; i<d; i++)
    {
         s1[i] = tolower(s1[i]);
         s2[i] = tolower(s2[i]);
    }

   
        if( s1==s2 )
        {
            cout<<0<<endl;
        }
        else if( s1<s2 )
        {
            cout<<-1<<endl;
        }
        else if(s1>s2)
        {
            cout<<1<<endl;
        }

    

}