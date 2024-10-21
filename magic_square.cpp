#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define endl '\n'
int main()
{
    int n;   cin >> n;

    int a[n][n], r = 0, c = 0, d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> v;

    for (int i = 0; i < n; i++) // row
    {
        for (int j = 0; j < n; j++)
        {
            r += a[i][j];
            if(i==j)  {     d1 += a[i][j];     }
            if((i+j)==(n-1))  {    d2 += a[i][j];   }
        }
        v.push_back(r);
        r = 0;
    }
    v.push_back(d1);
    v.push_back(d2);

    int k = 0;
    while (k != n)//col
    {
        for (int i = 0; i < n; i++)
        {
            c += a[i][k];
        }
        v.push_back(c);
        c = 0; k++;
    }


   /* for (auto u : v)
    {
        cout << u << " ";
    }*/
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    //cout<<endl<<v.size()<<endl;

    if(v.size()==1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }


    return 0;
}