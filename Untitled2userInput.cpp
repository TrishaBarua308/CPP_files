#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    char ch[20];
    /*cout<<"Enter a number : ";
    cin>>num;
    cout<<"Entered number is : "<<num<<endl;
    cout<<"Enter your name : ";
    cin>>ch;
    cout<<"Welcome "<<ch;*/
    int num1=10,num2=3;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    double sum = num1+num2;
    cout<<setw(22)<<"Sum = "<<sum<<endl;

    double sub = num1-num2;
    cout<<setw(22)<<"Subtraction = "<<sub<<endl;

    double multi = num1*num2;
    cout<<setw(22)<<"Multiplication = "<<multi<<endl;

    double div = (float)num1/num2;
    cout<<setw(22)<<"Division = "<<div<<endl;

    int rem = num1%num2;
    cout<<setw(22)<<"Remainder = "<<rem<<endl;

    getch();
}
