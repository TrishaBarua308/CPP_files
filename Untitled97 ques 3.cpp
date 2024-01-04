#include<iostream>
#include<string.h>
using namespace std;
class panda
{
    string name,gen;
    int age;
public:
    panda(string n,string g, int a)
    {
        name = n;
        gen = g;
        age = a;
    }
    void setName(string n)
    {
        name = n;
    }
    void setGen(string g)
    {
        gen = g;
    }
    void setAge(int a)
    {
        age = a;
    }
    void sleep()
    {
        cout<<name<<" duration is unknown thus should have only bamboo leaves."<<endl;
    }
    void sleep(int v)
    {
        if(v>=9 && v<=11)
        {
            cout<<name<<" sleeps "<<v<<" hours daily and should have Broccoli chicken."<<endl;
        }
        if(v>=3 && v<=5)
        {
            cout<<name<<" sleeps "<<v<<" hours daily and should have Mixed Veggies."<<endl;
        }
        if(v>=6 && v<=8)
        {
            cout<<name<<" sleeps "<<v<<" hours daily and should have Eggplant and tofu."<<endl;
        }
    }
    void print()
    {
        cout<<name<<" is a "<<gen<<" Panda Bear who is "<<age<<" years old"<<endl;
    }
};
int main()
{
    panda p1 = panda("Kunfu","Male", 5);
    panda p2 = panda("Pan Pan","Female",3);
    panda p3 = panda("Ming Ming","Female",8);
    p1.print();
    p2.print();
    p3.print();
    cout<<"==========================="<<endl;
    p2.sleep(10);
    p1.sleep(4);
    p3.sleep();
}
