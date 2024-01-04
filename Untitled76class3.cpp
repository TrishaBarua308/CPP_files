#include<iostream>
using namespace std;
class Time
{
    int hours,minutes;
    public:
    void get_input(int a,int b)
    {
        hours = a;
        minutes = b;
    }
    void put_input()
    {
        cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
    }
    void sum(Time hours,Time minutes);
};
void Time :: sum(Time t1, Time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes %60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    Time T1,T2,T3;
    T1.get_input(2,45);
    T1.put_input();

    T2.get_input(3,55);
    T2.put_input();

    T3.sum(T1,T2);
    T3.put_input();
}
