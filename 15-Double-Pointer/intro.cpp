#include<iostream>
using namespace std;

void update(int **p2)
{
    // p2=p2+1;

    // *p2=*p2+1;

    **p2=**p2+1;
}
int main(){

    int i=5;
    int *p=&i;
    int **p2=&p ;

    // cout<<endl<<endl<<"Sab Sahi Chal Rha"<<endl<<endl;

    // cout<<"Printing P"<<p<<endl;
    // // cout<<"Address Of P"<<&p<<endl; 
    // cout<<*p2<<endl;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl; 

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl;

    cout<<"Before->"<<i<<endl;
    cout<<"Before->"<<p<<endl;
    cout<<"Before->"<<p2<<endl;
    update(p2);
    cout<<"After->"<<i<<endl;
    cout<<"After->"<<p<<endl;
    cout<<"After->"<<p2<<endl;


    return 0;
}