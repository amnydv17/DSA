#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;

    //first insert
    m[1]="Aman";
    m[7]="Yadav";
    m[11]="ABCD";

    //second insertion
    m.insert({18,"Virat"});

    cout << "Before Erase" << endl;
    for (auto i : m)
    {
        cout <<i.first<<"->"<< i.second <<endl;
    }
    cout << endl;

    m.erase(11);

    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout <<i.first<<"->"<< i.second <<endl;
    }

    cout << endl;

    cout<<"Finding 18->"<<m.count(18)<<endl;

    auto it=m.find(1);

    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
    
    return 0;
}