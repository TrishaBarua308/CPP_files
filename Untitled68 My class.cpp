#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<"ID = "<<id<<"  GPA =  "<<gpa<<endl;
    }
    Student(int x, double y)//constructor//class name equal to constructor name
    //has no return type//called automatically//special type of function
    {
        id = x;
        gpa = y;
    }
};
int main()
{
    Student Setu(101, 3.99);
    cout<<"Input information for Setu :"<<endl;
    Setu.display();

    Student Mitu(102,3.88);
    cout<<"Input information for Mitu :"<<endl;
    Mitu.display();

    getch();
    return 0;
}
