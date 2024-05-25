#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;

    s.push("Aman");
    s.push("Yadav");
    s.push("CSE");

    cout<<"Top Element->"<<s.top()<<endl;

    s.pop();

    cout<<"Top Element->"<<s.top()<<endl;

    cout<<"Size of Stack is->"<<s.size()<<endl;
    cout<<"Stack is empty or not->"<<s.empty()<<endl;
    
    return 0;
}