#include<iostream>
using namespace std;
class overload
{
    int num;
public:
    void input(int n)
    {
        num = n;
    }
    bool friend operator>(overload a,overload b)
    {
        if(a.num>b.num)
            return true;
        else
            return false;
    }

}a,b;
int main()
{
    a.input(55);
    b.input(8);
    if(a>b)
    {
        cout<<"A is larger "<<endl;
    }
    else
    {
        cout<<"B is larger"<<endl;
    }
    return 0;
}
