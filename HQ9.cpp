#include <iostream>
#include <string>
using namespace std;
int main() {
    string s,s2;
    cin>>s;
    int flag=0;
    s2 = "HQ9";
    
    for(int i=0; i <s.length(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag = 1;
        }
    }
    
    cout<<(flag ? "YES" : "NO" ) <<'\n';

    return 0;
}