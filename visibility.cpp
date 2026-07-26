// visibility
// https://atcoder.jp/contests/abc197/tasks/abc197_b?lang=en
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    int h, w,x,y;
    cin >> h >> w >> x >> y;
    char a[h][w];
    int r = x - 1, c = y - 1;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }

   int ans =1;

   for(int j=c+1; j<w; j++) // x right
   {
    if(a[r][j]=='.') ans++;
    else break;
   }

   for(int j=c-1; j>=0; j--) // x left
   {
    if(a[r][j]=='.') ans++;
    else break;
   }

   for(int i=r+1; i<h; i++) // y down
   {
    if(a[i][c]=='.') ans++;
    else break;
   }

   for(int i=r-1; i>=0; i--)  // y up
   {
    if(a[i][c]=='.') ans++;
    else break;
   }

   cout<<ans<<endl;



    return 0;
}