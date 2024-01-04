#include<iostream>
using namespace std;
class Human
{
    float height;
public:
    Human(){}
    void setHeight(float h)
    {
        height = h;
    }
    float avgHeight(Human ob1,Human ob2)
    {
        return (ob1.height+ob2.height)/2.0;
    }
}p1,p2,p3;
int main()
{
    float height1,height2;
    cout<<"Input 1st height : ";
    cin>>height1;
    cout<<"Input 2nd height : ";
    cin>>height2;
    p1.setHeight(height1);
    p2.setHeight(height2);
    cout<<"Average Height : "<<p3.avgHeight(p1,p2);
}
