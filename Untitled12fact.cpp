#include<iostream>//factorial
#include<conio.h>
using namespace std;
int main()
{
    int num,i,fact=1;
    cout<<"Enter number : ";
    cin>>num;
    for(i=num;i>=1;i--)
   fact = fact*i;
        cout<<"Factorial = "<<fact<<endl;
}
