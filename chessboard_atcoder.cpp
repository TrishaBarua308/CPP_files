// B - Chessboard
// https://atcoder.jp/contests/abc296/tasks/abc296_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[8];   
    for(int i=0; i<8; i++)  cin>>s[i];

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<s[i].length(); j++)
        {
            if(s[i][j] == '*' )
            {
                cout<<char('a'+j)<<8-i<<endl;
                return 0;
            }
        }
    }
}