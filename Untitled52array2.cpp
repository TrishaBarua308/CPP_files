#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0,temp;
    cout<<"Enter the number of students : ";
    cin>>n;

    int marks[n],i;

    for(i=0;i<n;i++)
    {
        cout<<"Marks of student : "<<i+1<<" = ";
        cin>>marks[i];
    }
    cout<<endl;
    cout<<"Students marks are : ";
    for(i=0;i<n;i++)
        cout<<marks[i]<<" ";

    cout<<endl<<endl;

    for(i=0;i<n;i++)
    {
        sum += marks[i];
    }
    cout<<"Sum of total marks : "<<sum<<endl;
    cout<< "Average of total marks : "<<((float)sum/n)<<endl;

    int max = marks[0];
    int min = marks[0];
    for(i=1;i<n;i++)
    {
        if(marks[i]>max)
        {
            max = marks [i];
        }

        if(marks[i]<min)
        {
            min = marks[i];
        }
    }
    cout<< "Maximum marks : "<<max<<endl;
    cout<< "Minimum marks : "<<min<<endl;

    getch();
    return 0;
}
