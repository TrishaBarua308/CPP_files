//615a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    set<int> s;

    while(m--)
    {
        int x;
        cin>>x;

        while(x--)
        {
            int y;
            cin>>y;
            s.insert(y);
        }
    }

    //cout<<"size = "<<s.size()<<endl;
    if(s.size()==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}