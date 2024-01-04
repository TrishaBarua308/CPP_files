#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit;
    cout<<"Enter digit : ";
    cin>>digit;
    switch(digit)
    {
    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
    case 6:
        cout<<"Six";
        break;
    case 7:
        cout<<"Seven";
        break;
    case 8:
        cout<<"Eight";
        break;
    case 9:
        cout<<"Nine";
        break;
    default:
        cout<<"Not one digit";
    }
    cout<<endl;
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    ch = tolower(ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonant";

    }
}
