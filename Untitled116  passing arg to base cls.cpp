#include<iostream>
using namespace std;
class base
{
protected:
    int i;
public:
    base(int x)
    {
        i = x;
        cout<<"Constructor base"<<endl;
    }
    ~base()
    {
        cout<<"Destructor base"<<endl;
    }
};
class derived : public base
{
public:
    int j;
    derived(int x,int y): base(y)
    {
        j = x;
        cout<<"Constructor derived"<<endl;
    }
    ~derived()
    {
        cout<<"Destructor derived"<<endl;
    }
    void show()
    {
        cout<<i<<" "<<j<<endl;
    }
};
int main()
{
    derived ob(3,4);
    ob.show();

    return 0;
}
/*
constructor base
constructor derived
4 3
destructor derived
destructor base
*/

