#include<iostream>
using namespace std;
class student
{
public:
     const int admissionFee;
    const int examFee;
    int id;

    student(int x,int y,int z)
    : admissionFee(x),examFee(y)
    {
        int id = z;

        cout<<admissionFee<<endl;
        cout<<examFee<<endl;
        cout<<id<<endl;
    }
};
int main()
{
    student s(15000,500,1016);
}
