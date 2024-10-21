//1118A
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
bool isVowel(char c)
{
    return (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='y' );
}
int main()
{
    optimize();
    string s,ans; cin>>s;

    for(auto a : s)
    {
        char c = tolower(a);
        if(!isVowel(c)) // constant
        {
            ans += '.';
            ans+=c;
        }
    }

    cout<<ans<<endl;

    return 0;

}