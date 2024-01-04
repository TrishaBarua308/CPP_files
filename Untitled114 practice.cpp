#include<iostream>
using namespace std;
class demo
{
    int num;
public:
    demo(){}
    demo(int Minus)
    {
        num = Minus;
    }
    void operator++(int)
    {
        num = num +1;
    }
    void display()
    {
        cout<<num<<endl;
    }
};
int main()
{
    demo A;
    A = demo(5);
    A++;//operator overloading declaration
    A.display();
}



