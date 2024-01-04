#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    string name;
    int id;
    string dept;
public:
    Student(string n,int i,string d)
    {
        name = n;
        id = i;
        dept = d;
    }
void setName(string n)
    {
        name = n;
    }
void setId(int i)
    {
        id = i;
    }
void setDept(string d)
    {
        dept = d;
    }

void details()
    {
        cout<<"Name = "<<name<<"\tId = "<<id<<"\tDept. = "<<dept<<endl;
    }
};

int main()
{
    Student s1("Alic",2014,"CSE");
    Student s2("Bob",1416,"EEE");
    Student s3 = s2;
    s3.setName("Carol");
    s3.setId(1561);
    s3.setDept("BMB");
    cout<<"Student 01 details : "<<endl;
    s1.details();
    cout<<"Student 02 details : "<<endl;
    s3.details();
}
