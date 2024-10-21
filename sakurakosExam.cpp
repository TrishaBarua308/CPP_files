//A. Sakurako's Exam
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    int t,y=0,n=0;
    cin>>t;
    while(t--)
    {
        int a,b;  cin>>a>>b;
        int sum = a+ 2*b;
        if( (a%2!=0 && b%2!=0) || sum%2!=0 || (a==0 && b%2!=0) || (a%2!=0 && b==0 )){ cout<<"NO\n";   n++;  } 
        else {cout<<"YES\n";  y++;  }
        
    }
    //cout<<"YES = "<<y<<" &&  NO = "<<n<<endl;

    return 0;
}