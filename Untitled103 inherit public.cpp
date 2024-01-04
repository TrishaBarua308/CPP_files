#include<iostream>
using namespace std;
class base
{
    int data;
public:
    void setData()
    {
        cout<<"Input data : ";
        cin>>data;
    }
    void display_base()
    {
        cout<<"Data = "<<data<<endl;
    }
};


/*class derived : public base//2. cause it call publicly
{
public:
    void display_derived()
    {
        cout<<endl<<"Derived class"<<endl;
    }
};
int main()
{
    derived obj;
    obj.setData();//1. it can access private member directly
    obj.display_base();

    obj.display_derived();

}
*/
class derived : protected base
{
public:
    void display_derived()
    {
        setData();
        display_base();

        cout<<endl<<"Derived class"<<endl;
    }
};
int main()
{
    derived obj;
    obj.display_derived();
}



