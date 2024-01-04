#include<iostream>
using namespace std;
class student
{
    string name,dept;
    int id;
public:
    student(){}
    student(string n,int i,string d)
    {
        name = n;
        id = i;
        dept = d;

    }
    void setName(string n)
    {
        name = n;
    }
    void setDept(string d)
    {
        dept = d;
    }
    void setId(int i)
    {
        id = i;
    }
    student(student &obj)
    {
        name = obj.name;
        dept = obj.dept;
        id = obj.id;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl<<"ID : "<<id<<endl<<"Department : "<<dept<<endl;
    }
    void advise(string s1,string s2,string s3)
    {
        cout<<name<<" ,you have taken 09 credits."<<endl;
        cout<<"List of courses : "<<s1<<", "<<s2<<", "<<s3<<endl;
        cout<<"Status : OK."<<endl;
    }

    void advise(string s1,string s2)
    {
        cout<<name<<" ,you have taken 06 credits."<<endl;
        cout<<"List of courses : "<<s1<<", "<<s2<<endl;
        cout<<"Status : You have to take at least."<<endl;
    }

    void advise(string s1,string s2,string s3,string s4,string s5)
    {
        cout<<name<<" ,you have taken 15 credits."<<endl;
        cout<<"List of courses : "<<s1<<", "<<s2<<", "<<s3<<", "<<s4<<", "<<s5<<endl;
        cout<<"Status : You have to drop at least."<<endl;
    }
};
int main()
{
    student s1("Alice",20103012,"CSE");
    student s2("Bob",18301254,"EEE");
    student s3=s2;
    s3.setName("Carol");
    s3.setId(17101238);
    s3.setDept("CSE");

    cout<<"##############################"<<endl;
    s1.display();

    cout<<"##############################"<<endl;
    s2.display();

    //cout<<"##############################"<<endl;
    //s3.display();

    cout<<"##############################"<<endl;
    s1.advise("CSE 110","MATH110","PHY 111");

    cout<<"##############################"<<endl;
    s2.advise("BUS 101","MATH120");

    cout<<"##############################"<<endl;
    s3.advise("CSE 111","MATH110","PHY 111","ENG 102","CSE 220");

}
