#include<iostream>
using namespace std;
class Complex
{
    int x,y;
public:
    void input(int real,int imag)
    {
        x = real;
        y = imag;
    }
    friend Complex sum(Complex c1,Complex c2);
    void show(Complex c)
    {
        cout<<c.x<<" + "<<c.y<<"i"<<endl;
    }
};
Complex sum(Complex c1,Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
int main()
{
    Complex A,B,C;
    A.input(3,5);
    B.input(6,7);
    C = sum(A,B);
    cout<<"A = ";
    A.show(A);
    cout<<"B = ";
    B.show(B);
    cout<<"C = ";
    C.show(C);
}

