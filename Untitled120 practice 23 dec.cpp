#include<iostream>
using namespace std;
class over
{
public:
    int real,imag;

    over(){}
    over(int r,int i)
    {
       real = r;
       imag = i;
    }
    friend over operator+(int num,over &a)
    {
        over tmp;
        tmp.real = num + a.real;
        tmp.imag = a.imag;
        return tmp;
    }
    void display()
    {
        cout<<"Real = "<<real<<" Imag "<<imag<<endl;
    }

};
int main()
{
    over a(5,8);
    //over b(10,10);
    over c = 5+a;
    c.display();
}
