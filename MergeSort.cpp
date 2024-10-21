#include <iostream>
using namespace std;
void merge(int a[], int p, int q, int r);
void mergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        merge(a, p, q, r);
    }
    else
    {
        return;
    }
}
void merge(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = a[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = a[q + j + 1];
    }

    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
int main()
{
    int a[] = {6, 4, 2, 1, 9, 8, 3, 5};
    int d = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, d - 1);

    cout << "Sorted array : ";
    for (int i = 0; i < d; i++)
    {
        cout << a[i] << " ";
    }
}