#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    while(1) //1 says until the program is true and I stop the program
    {
        int randomNumber,num,i;
        cout<<"Guess a number from 1 to 5: ";
        cin>>num;
        randomNumber = 1 + rand()%5;
        if(num==randomNumber)
        {
            cout<<"Hurray!!!You Won the game"<<endl;
            break;
        }
        else
        {
            cout<<"You lost the game."<<endl;
            cout<<"Random Number was "<<randomNumber<<endl<<endl;
        }
    }
}
