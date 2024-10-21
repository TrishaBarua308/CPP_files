//hacker earth
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main() {
    optimize();
	int t; cin>>t;

	while(t--)
	{
		string s; cin>>s;

		bool f = next_permutation(s.begin(), s.end());

        if(f==1) cout<<s<<endl;
        else cout<<"no answer"<<endl;
	}

    return 0;
}