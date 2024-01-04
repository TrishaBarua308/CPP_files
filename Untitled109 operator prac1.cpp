#include<iostream>
using namespace std;
class demo
{
    int x,y,z;
public:
    void getData(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -y;
    }
    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
};
int main()
{
    demo obj;
    obj.getData(10,20,30);
    obj.display();
    -obj;//operator overloading  declaration
    obj.display();
}


