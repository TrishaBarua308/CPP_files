#include<iostream>
using namespace std;
class student
{
    int roll;
    float mark;
public:
    void getData(int a,float b);
    void putData()
    {
        cout<<"Roll : "<<roll<<endl;
        cout<<"Mark : "<<mark<<endl;
    }

};
void student :: getData(int a,float b)
{
    roll = a;
    mark = b;
    cout<<"Input roll & marks : ";
    cin>>roll>>mark;
}
int main()
{
    student a;
    a.getData(1016,55.85);
    a.putData();

}
