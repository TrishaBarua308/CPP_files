#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,marks[10],n;
    cout<<"Enter array number : ";
    cin>>n;
    //cout<<"Enter elements of an array :";
    for(i=0;i<n;i++)
    {
        cout<<"Enter student marks  "<<i+1<<" = ";
        cin>>marks[i];
    }

    for(i=0;i<5;i++)
        cout<<marks[i]<<" ";
    getch();
    return 0;
}
