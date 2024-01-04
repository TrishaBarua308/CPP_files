#include<iostream>
using namespace std;
class student
{
    string name;
    float result;
public:
    student(string name = "Default student")
    {
        this->name = name;
    }
    student quizCalc(float x)
    {
         result = x/3;
        //cout<<result<<endl;
    }
    student quizCalc(float x,float y)
    {
         result= (x+y)/3;
        //cout<<result<<endl;
    }
    student quizCalc(float x,float y,float z)
    {
         result= (x+y+z)/3;
        //cout<<result<<endl;
    }
    void printDetail()
    {
        cout<<"Hello "<<name<<endl;
        this->result= result;
        cout<<"Your average quiz score is "<<result<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1 = student();
    s1.quizCalc(10);
    cout<<endl<<"---------------------"<<endl;
    s1.printDetail();

    s2 = student("Harry");
    s2.quizCalc(10,8);
    cout<<"---------------------"<<endl;
    s2.printDetail();

    s3 = student("Hermione");
    s3.quizCalc(10,9,10);
    cout<<"---------------------"<<endl;
    s3.printDetail();
}
