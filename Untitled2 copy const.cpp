#include<iostream>
using namespace std;
class Integer
{
    int m,n;
public:
    Integer()
    {//default constructor
        m=0;
        n=0;
    }
    Integer(int x,int y)
    {//parameterized constructor
        m = x;
        n = y;
    }
    Integer (Integer &i)
    {//copy constructor
        m = i.m;
        n = i.n;
    }
    void display()
    {
        cout<<"M = "<<m<<"\tN = "<<n<<endl;
    }
};
int main()
{
    Integer i1;
    Integer i2(50,20);
    Integer i3(i2);
    i1.display();
    i2.display();
    i3.display();

}



