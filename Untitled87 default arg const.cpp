#include<iostream>
using namespace std;
class Dynamic
{
    float sum;
public:
    Dynamic(){};//default
    Dynamic(int a,int b,int c);
    Dynamic(int a,int b, float c = 5.43);
    void display(void);
};
Dynamic:: Dynamic(int a,int b,int c)
{
    sum = a+b+c;
}
Dynamic :: Dynamic(int a,int b, float c)
{
    sum = a+b+c;
}
void Dynamic :: display(void)
{
    cout<<"Sum = "<<sum<<endl;
}
int main()
{
    int p,q,r;
    float s;
    cout<<"Input p,q and r : ";
    cin>>p>>q>>r;
    Dynamic A(p,q,r);
    cout<<"Input p,q and s : ";
    cin>>p>>q>>s;
    Dynamic B(p,q,s);
    Dynamic C(p,q);
    cout<<"A ";
    A.display();
    cout<<"B ";
    B.display();
    cout<<"C ";
    C.display();

}
