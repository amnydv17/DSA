#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}

void update(int *p)
{
    // p=p+1;
    // cout<<"Inside->"<<*p<<endl;
    *p=*p+1;
}
int main(){
    
    int value=7;

    int *p=&value;

    // print(p);

    cout<<"Before->"<<*p<<endl;
    update(p);
    cout<<"After->"<<*p<<endl;

    return 0;
}
