#include<iostream>
using namespace std;
class bank
{
    int accNum,balance;
public:
    void getData(int a,int b)
    {
        accNum = a;
        balance = b;

        cout<<"Account name = "<<a;
        cout<<"\t\t Balance = "<<b<<endl;
    }
    void deposit()
    {
        int d;
        cin>>d;
        balance += d;
        cout<<"Deposit successful. Current balance = "<<balance<<endl;
    }

    void withdraw()
    {
        int w;
        cin>>w;
        if(w>balance)
        {
            cout<<"Insufficient balance."<<endl;
        }
        else
        {
            balance -= w;
            cout<<"Withdrawal successfully. Current balance = "<<balance<<endl;
        }
    }
};
int main()
{
    bank ob1;
    ob1.getData(4155,1000);
    cout<<"Deposit amount : ";
    ob1.deposit();
    cout<<"Attempt to withdraw : ";
    ob1.withdraw();

}
