#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,string> b;
    b.insert(make_pair(10,"Deepak"));
    b.insert(make_pair(20,"Mike"));
    b.insert(make_pair(30,"John"));
//multimap can take key more than one
//which one not preferable in map
    b.insert(pair<int,string>(10,"Sam"));

    multimap <int,string> :: iterator it = b.begin();

    for(it; it!= b.end(); it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }

    auto lb = b.lower_bound(20);
    auto ub = b.upper_bound(30);

    for(it = lb; it!= ub; it++)//selected prints
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    cout<<"Empty : "<<b.empty()<<endl;//empty 0 means full 
    cout<<"Size : "<<b.size()<<endl;

}