#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[]= {3,5,6,7,8,2},pos=-1;//pos==-1 cause array position start from 0
    int i,s = sizeof(a);
    int value;
    cout<<"Enter the value want to search: ";
    cin>>value;

    for(i=0; i<s; i++)
    {
        if(value==a[i])

        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
        cout<<"Item is not found.";
    else
        cout<<"Number "<<value<<" is in position "<<pos<<"."<<endl;

    getch();
    return 0;
}
