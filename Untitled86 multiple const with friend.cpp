#include<iostream>
using namespace std;
class Complex
{
    int x,y;
public:
    Complex(){}
    Complex(int a)
    {
        x=y=a;
    }
    Complex(int real,int imag)
    {
        x = real;
        y = imag;
    }
    friend Complex sum(Complex c1,Complex c2);
    friend display(Complex c);
};
Complex sum(Complex c1,Complex c2)
{
    Complex c3 ;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
display(Complex c)
{
    cout<<c.x<<" + i"<<c.y<<endl;
}
int main()
{
    Complex A(5,2);
    Complex B(8);
    Complex C;
    C = sum(A,B);

    cout<<" A = ";
    display(A);
    cout<<" B = ";
    display(B);
    cout<<" C = ";
    display(C);

}


