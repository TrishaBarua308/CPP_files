#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if(100<marks)
        cout<<"Invalid marks";
    else if(100>=marks && marks>=80)
        cout<<"Amazing!You got A+";

    else if(100>=marks && marks>=80)
        cout<<"You got A";

    else if(79>=marks && marks>=70)
        cout<<"You got A-";

    else if(69>=marks && marks>=60)
        cout<<"You got B";

    else if(59>=marks && marks>=50)
        cout<<"You got C";

    else if(49>=marks && marks>33)
        cout<<"You got D";

    else if(33>=marks)
        cout<<"Sorry!You are Failed";

}
