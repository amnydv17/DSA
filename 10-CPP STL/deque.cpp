#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_back(5);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);

    cout<<"Before Pop"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    d.pop_front();

    cout<<"After Pop"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    

     // Element at any endex
    cout << "Element at 1st Index ->" << d.at(1) << endl;

    // Print First element STL deque 
    cout << endl
         << "First Element is->" << d.front() << endl;

    // Print Last Element of STL deque
    cout << endl
         << "Last Element is->" << d.back() << endl;
    
    //Print to check deque is empty or not
    cout<<endl<<"Empty or not->"<<d.empty()<<endl;

    cout<<" Before Erase->"<<d.size()<<endl;
    d.erase(d.begin(),d.end());
    cout<<" After Erase->"<<d.size()<<endl;

    cout<<"Print Deque"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}