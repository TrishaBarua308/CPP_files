#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class student
{
private:
    string name;;
    int age;
public:
    void getData();
    void displayData();
};
void student :: getData()
{
    cout<<"Input name : ";
    cin>>name;
    cout<<"Input age : ";
    cin>>age;
    cout<<endl;
}
void student :: displayData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}
int main()
{
    student setu,mitu;
    setu.getData();
    mitu.getData();

    setu.displayData();
    mitu.displayData();
}
