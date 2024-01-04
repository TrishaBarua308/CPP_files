#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col;
    char c ,al= 'A';
    cout<<"Enter the uppercase character you want to print in the last row : ";
    cin>>c;
    c = toupper(c);//to convert upper case
    for(row=1; row<=(c-'A'+1); row++)
    {
        for(col=1; col<=row; col++)
            cout<<al<<" ";
            ++al;
        cout<<endl;
    }
}
