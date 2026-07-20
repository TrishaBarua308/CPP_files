// //string palindrome
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     string s;   cin>>s;
//     string rev=s;
//     reverse(rev.begin(), rev.end());

//     cout<<rev<<e

//     if(s==rev)
//     {
//         cout<<"Palindrome";
//     }
//     else
//     {
//         cout<<"Not Palindrome";
//     }
    
// }









// Other pointer appro

bool isPalindrome(string s)
{
    int f = 0;
    int t = s.length()-1;

    while(f<t)
    {
        if(s[f] != s[t])   return false;

        f++;
        t--;
    }

    return true;
}


int main()
{
    string s;   cin>>s;
    cout<<((isPalindrome(s))?"Palindrome":"Non-Palindrome")<<endl;
}


