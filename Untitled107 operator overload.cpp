#include<iostream>
using namespace std;
class overloading
{
       int num1;
       int num2;
public:
       void setter(int x)
       {
              num1=x;

       }
       void display()
       {
              cout<<num1<<"i"<<"+"<<num2<<endl;
       }
       bool operator>(overloading m)
       {

              return num1>m.num1;
       }
        bool operator<(overloading m)
       {

              return num1>m.num1;
       }

};
int main()
{
     overloading m1,m2,m3;
     m1.setter(10);
     m2.setter(5);
      if(m1>m2)
      {
             cout<<"yes"<<endl;
      }
       if(m1<m2)
      {
          cout<<"No";
      }


}
