#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    list<int>li(5,777);
    cout<<"Print Li"<<endl;
    for(int i:li)
    {
        cout<< i <<" ";
    }cout<<endl;
    list<int>copy(li);
    cout<<"Print Copy"<<endl;
    for(int i:copy)
    {
        cout<< i <<" ";
    }cout<<endl;

    l.push_back(2);
    l.push_front(4);

    cout<<"Before Erase"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());

    cout<<"After Erase"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of deque is->"<<l.size()<<endl;
    return 0;
}