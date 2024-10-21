//141a
//144a
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define endl '\n'
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string temp = s1+s2;

    sort(s3.begin(),s3.end());
    sort(temp.begin(),temp.end());
    //cout<<temp<<endl<<s3<<endl;
    cout<<((temp==s3)?"YES":"NO")<<endl;
    return 0;
}