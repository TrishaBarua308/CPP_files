// 1131a//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    cout << (2 * (h1 + h2)) +  (w2 + w1) + 4+(w1-w2);//4 for four corner


   return 0;
}