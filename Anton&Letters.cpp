#include <bits/stdc++.h> //443A
using namespace std;
int main()
{
    
    string s;
    getline(cin,s);
    int c=0;
    sort(s.begin(), s.end());
    for(int i=0; i< s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c++;
            if(s[i]==s[i+1])
            {
            c--;
            }
        }
    }
        //cout<<s<<endl;
        cout<<c<<endl;

    return 0;
}