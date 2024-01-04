#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,first =2,second = 1,lucas,n;
    cout<<"Enter last number : ";
    cin>>n;
    cout<<"Lucas series :"<<endl;
    cout<<first<<" "<<second;
    for(i=3;i<=n;i++)
    {
        lucas = first + second;
        cout<<" "<<lucas;
        first = second;
        second = lucas;
    }
    getch();
    return 0;
}
