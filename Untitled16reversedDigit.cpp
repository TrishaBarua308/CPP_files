#include <iostream>

using namespace std;

int main()
{
    int n,temp,sum=0,rem;
    cout<<"Enter n: ";
    cin>>n;
    temp = n;
    while(temp!=0)
    {
        rem = temp % 10;//3
        sum = sum*10 +rem;
        temp = temp / 10;//12
    }
    cout<<"Reversed digit : "<<sum;
    return 0;
}
