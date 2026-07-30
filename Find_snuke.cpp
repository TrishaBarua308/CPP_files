#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    optimize();

    int h, w;
    cin >> h >> w;
    char a[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }

    int dx[9] = {0, -1, -1, -1, 0, 0, 1, 1, 1};
    int dy[9] = {0, -1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            for (int k = 1; k < 9; k++){

                int i2 = i, j2 = j;
                char word[] = "snuke";
                int flag = 1;
                for (int l = 0; l < 5; l++) // word
                {
                    if (0 <= i2 && i2 < h && 0 <= j2 && j2 < w)
                    {
                        if (word[l] != a[i2][j2])
                        {
                            flag = 0;
                            break;
                        }
                        i2 += dx[k];
                        j2 += dy[k];
                    }

                    else
                    {
                        flag = 0;
                        break;
                    }
                }

                if(flag==1) // right
                {
                    i2=i, j2=j;
                    for(int l=0; l<5; l++)
                    {
                        cout<<i2+1<<" "<<j2+1<<endl;
                        i2 += dx[k];
                        j2 += dy[k];
                    }

                    return 0;
                }
            }
        }
    }

    return 0;
}
