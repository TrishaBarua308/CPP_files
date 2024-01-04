#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a1[5]= {2,4,5,6,7},a2[5],i;

    cout<<"Array 01 : ";
    for(i=0; i<5; i++)
    {
        cout<<a1[i]<<" ";
    }

    cout<<endl;

    cout<<"Array 02 : ";
    for(i=0; i<5; i++)
    {
        a2[i] = a1[i] ;
        cout<<a2[i]<<" ";
    }

    getch();
    return 0;
}
