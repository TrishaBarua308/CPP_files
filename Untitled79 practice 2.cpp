#include<iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout<<"Default / non parameterized constructor"<<endl<<endl;
    }
    ~demo()
    {
        cout<<"Destructor."<<endl<<endl;
    }
};
int main()
{
    demo ob;

}
