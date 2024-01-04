#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    string name;
public:
    void setName(string x)
    {
        name =x;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    student s1;
    s1.setName("Trisha");
    cout<<"Welcome "<<" "<<s1.getName();
    return 0;
}
