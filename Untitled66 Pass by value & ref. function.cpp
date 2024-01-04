#include<iostream>//pass by reference
using namespace std;
void display(int *num)
{
    *num=20;
}
int main()
{
    int x=10;
    cout<<"Before x = "<<x<<endl;
    display(&x);
    cout<<"After x = "<<x<<endl;
}
