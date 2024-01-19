#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> coffee;
    coffee["  Espresso"] = 25;
    coffee["Cappuccino"] = 30;
    coffee["Tea"] = 20;
    
    map<string, int> :: iterator it;
    it = coffee.begin();

    //coffee.erase(it);//by iterator//erase by sorted value
    coffee.erase("Tea");
    coffee.insert(make_pair("Cold coffee",35));
    coffee.insert(make_pair("Mocha coffee",40));
    coffee.insert(make_pair("Americano coffee",50));//auto sorted ascending
    for(it=coffee.begin(); it != coffee.end(); it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }

   /* if(coffee.find("Tea") != coffee.end())
    {
        cout<<"Key found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    */
    return 0;
}