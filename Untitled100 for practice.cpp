#include<iostream>
using namespace std;
class employee;
class boss
{
    int salary;
public:
    boss(){}
    boss(int s)
    {
        salary = s;
    }
    void display()
    {
        cout<<"Boss = "<<salary<<endl;
    }
    friend void total(boss,employee);
}b(5000);
class employee
{
    int salary;
public:
    employee(){}
    employee(int s)
    {
        salary = s;
    }
    void display()
    {
        cout<<"Employee = "<<salary<<endl;
    }
    friend void total(boss,employee);
}e(2500);
void total(boss b,employee e)
{
    int total;
    total = b.salary + e.salary;
    cout<<"Total = "<<total<<endl;
}
int main()
{
    b.display();
    e.display();
    total(b,e);
}
