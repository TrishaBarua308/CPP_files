//Longest common subsequence
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base:: sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n'

int lcs( const string &s1, const string &s2 )
{
    int m = s1.length(), n= s2.length();

     int l[m+1][n+1]; // 2d array
    
    for(int i=0; i<m+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            if(i==0 || j==0)
            {
                l[i][j]=0;
            }
            else if( s1[i-1] == s2[j-1] )
            {
                l[i][j] = l[i-1][j-1]+1;
            }
            else
            {
                l[i][j] = max(l[i-1][j], l[i][j-1]);
            }
        }
    }

    //return l[m][n];

    string ans;
    int i=m, j=n;
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            ans += s1[i-1];
            i--;
            j--;
        }
        else if(l[i-1][j] > l[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    
    //reverse(ans.begin(), ans.end());
    
    int temp = ans.length();
    return temp;
    
}

int main()
{
    optimize();

    string s1,s2;  cin>>s1>>s2;
    int n1 = s1.length(), n2 = s2.length();
    
    cout<<lcs(s1,s2)<<endl;
}