#include <iostream>
using namespace std;
int main()
{
  int row,col,n;
  cout<<"Enter row number : ";
  cin>>n;
  for(row=1;row<=n;row++)
     {
         for(col=1;col<=row;col++)
         {
             cout<<((char)(col+64));//64 for showing number to capital letter
         }
         cout<<endl;
     }
  return 0;
}
