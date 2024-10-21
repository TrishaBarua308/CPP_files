#include<iostream>
using namespace std;
class Date
{
    int date,month,year;
    public:
    Date()
    {
        cout<<"Input date,month & year : ";
        cin>>date>>month>>year;
    }
    Date(int d,int m,int y)
    {
        date = d;
        month = m;
        year = y;
    }
    void display()
    {
        int flag=0;
        
        if(month>0 && month<=12)
        {
            if(date>0)
            {
                if(month==2)
                {
                    if(year%4==0 && year%100!=0 || year%400==0)
                    {
                        if(date>29)
                        {
                            flag++;//invalid
                        }
                    }
                    else
                    {
                        if(date>28)
                        {
                            flag++;//invalid
                        }
                    }
                }
                if(month!=2 && month%2==0 && date>30)
                {
                    flag++;//in
                }
                if(month%2!=0 && date>31)
                {
                    flag++;//invlaid
                }
            }
        }
        
        cout<<date<<"/"<<month<<"/"<<year<<endl;

        if(flag==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
        
    }
};
int main()
{
    Date d;
    d.display();
}