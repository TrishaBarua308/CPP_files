#include<iostream>
using namespace std;
class cat
{
    string color,work;

    public:
    cat(string color = "White",string work = "sitting")//default argument constructor
    {
        this->work=work;
        cout<<color<<" cat is "<<work<<endl;
    }
    void changeColor(string color)
    {
        this->color = color;
    }

    void printCat()
    {
        cout<<color<<" cat is "<<work<<endl;
    }
};
int main()
{
    cat c1 = cat();
    cat c2 = cat("Black");
    cat c3 = cat("Brown","jumping");
    cat c4 = cat("Red","pouring");
    c1.changeColor("Blue");
    c3.changeColor("Purple");
    c1.printCat();
    c3.printCat();

}
