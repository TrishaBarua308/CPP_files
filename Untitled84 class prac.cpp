#include<iostream>
using namespace std;
class student
{
public:
    char name[20];
    int id;
    string dept;


    void setName(char n){name = n;}
    void setId(int i){id = i;}
    void setDept(string d){dept = d;}

    void s1_details()
    {
        cout<<"Name : "<<name<<endl<<"ID : "<<id<<"Dept. : "<<dept<<endl<<endl;
    }

    void s3_details()
    {
        cout<<"Name : "<<name<<endl<<"ID : "<<id<<"Dept. : "<<dept<<endl<<endl;
    }

};
int main()
{
    student s1("Alic","2014","CSE");
    student s2("Bob","14156","EEE");
    student s3 = s2;
    s3.setName("Carmel");
    s3.setId("15618");
    s3.setDept("BMS");

    cout<<s1.s1_details();
    cout<<s3.s3_details();
}
