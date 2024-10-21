//78a
#include<bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
bool isVowel(char c)
{
    return (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
}
int main()
{
    optimize();
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);
    string s3; getline(cin,s3);

    int f=0,s=0,t=0;

    for(int i=0; i<s1.length(); i++)
    {
        if(isVowel(s1[i])==1)
        f++;
    }
    
    for(int i=0; i<s2.length(); i++)
    {
        if(isVowel(s2[i])==1)
        s++;
    }

    for(int i=0; i<s3.length(); i++)
    {
        if(isVowel(s3[i])==1)
        t++;
    }

    cout<<((f==5 && s==7 && t==5)?"YES":"NO");
    return 0;
}