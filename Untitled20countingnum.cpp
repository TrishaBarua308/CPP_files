#include<iostream> // input-output stream
#include<conio.h> // For getch()
using namespace std; // input-output standard
int main()
{
    int num,temp,n=0;
    cout<<"Enter number :";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp = temp /10;//3
        ++n;
    }
    if(n==0)
        cout<<"Invalid input";
    else
        cout<<num<<" contains "<<n<<" digits.";
        getch();
        return 0;
}
