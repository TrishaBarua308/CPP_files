
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

   demo operator*(demo c)
   {
       demo temp;
       temp.x = x * c.x;
       temp.y = y * c.y;
       temp.z = z * c.z;
       return temp;
   }
   void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
};
int main()
{
    demo obj1,obj2,obj3;
    obj1.getData(10,2,3);
    obj1.display();
    obj2.getData(7,8,9);
    obj2.display();

    obj3 = obj1*obj2;
    obj3.display();
}


