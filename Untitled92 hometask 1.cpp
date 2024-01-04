#include<iostream>
using namespace std;
int result ;
class calculator
{
public:
    int fValue,sValue;
    char oper;

    calculator()//default constructor
    {
        fValue=sValue=oper=0;
    }
    calculator add()
    {

        result = fValue + sValue;
        cout<<"Result : "<<result;
    }
    calculator subtract()
    {

        result = fValue - sValue;
        cout<<"Result : "<<result;
    }
    calculator multiply()
    {

        result = fValue * sValue;
        cout<<"Result : "<<result;
    }
    calculator divide()
    {

        result = fValue / sValue;
        cout<<"Result : "<<result;
    }

};

int main()
{
    calculator ob;
    cout<<"Lets calculate"<<endl;
    cout<<"Value 1 : ";
    cin>>ob.fValue;
    cout<<"Operator : ";
    cin>>ob.oper;
    cout<<"Value 2 : ";
    cin>>ob.sValue;

    if(ob.oper == '+')
    {
        ob.add();
    }
    if(ob.oper == '-')
    {
        ob.subtract();
    }
    if(ob.oper == '*')
    {
        ob.multiply();
    }
    if(ob.oper == '/')
    {
        ob.divide();
    }
}
