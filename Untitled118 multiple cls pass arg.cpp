#include<iostream>
using namespace std;
class base2;
class base1
{
public:
    int i;
    base1(int x)
    {
        i = x;
        cout<<"Constructor base 1"<<endl;
    }
    ~base1()
    {
        cout<<"Destructor base 1"<<endl;
    }
};
class base2
{
public:
    int k;
    base2(int z)
    {
        k = z;
        cout<<"Constructor base 2"<<endl;
    }
    ~base2()
    {
        cout<<"Destructor base 2"<<endl;
    }
};
class derived : public base1,public base2
{
public:
    int j;
    derived(int x,int y,int z):base1(y),base2(z)
           //x=3,  y=4,  z= 5//---->y = 4//z = 5
    {
        j = x;
        cout<<"constructor derived "<<endl;
    }
    ~derived()
    {
        cout<<"destructor derived "<<endl;
    }
    void show()
    {
        cout<<i<<" "<<j<<" "<<k<<endl;
    }
};
int main()
{
    derived ob(3,4,5);
    ob.show();

    return 0;
}
/*
constructor base 1
constructor base 2
constructor derived
4 3 5
destruct derived
destruct base 2
destruct base 1
*/
