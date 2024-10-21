#include<bits/stdc++.h>
using namespace std;// max min array
int find_max(int a[], int i, int j)
{
    if(i==j)
    {
        return a[i];
    }
    else
    {
        int mid = (i+j)/2;
        int max1 =  find_max(a,i,mid);
        int max2 =  find_max(a,mid+1, j);
        return (max1>max2)?max1:max2;
    }

}
int find_min(int a[], int i, int j)
{
    if(i==j)
    {
        return a[i];
    }
    else
    {
        int mid = (i+j)/2;
        int min1 =  find_min(a,i,mid);
        int min2 =  find_min(a,mid+1, j);
        return (min1<min2)?min1:min2;
    }

}
int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int d = sizeof(a)/sizeof(a[0]);

    cout<<"Max = "<<find_max(a,0,d)<<endl;
    cout<<"Min = "<<find_min(a,0,d)<<endl;
}