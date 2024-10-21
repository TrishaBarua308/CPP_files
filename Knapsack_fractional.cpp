#include <bits/stdc++.h>
using namespace std;
int main()
{
    int weight[] = {5, 2, 3, 1, 2}, profit[] = {4, 6, 3, 2, 4}, n = 5;
    float p_w[n];

    int w = 0, p = 0, cap = 5;
    cout << "Profit/weight = ";
    for (int i = 0; i < n; i++)
    {
        p_w[i] = (float)profit[i] / weight[i];
        cout << p_w[i] << " ";
    }
    cout << endl;

    while (w <= cap)
    {
        float max_value = p_w[0];
        int max_index = 0;

        for (int i = 0; i < n; i++)
        {
            if (max_value < p_w[i])
            {
                max_value = p_w[i];
                max_index = i;
            }
        }

        if (w + weight[max_index] > cap)
        {
            break;
        }
        else
        {
            p += profit[max_index];
            w += weight[max_index];

           // cout<<"\nMax index = "<<max_index<<endl;
        }
       p_w[max_index] = -1; // this item will not be selected again in the next iteration
    }

    cout << endl;
    cout << "Profit = " << p << endl;
    cout << "Weight = " << w << endl;

    return 0;
}