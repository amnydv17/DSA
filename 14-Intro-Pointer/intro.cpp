#include<iostream>
using namespace std;

int main(){
    
    // cout<<num<<endl;

    // cout<<"Address of num is->"<<&num<<endl;

    // //addresss operator

    // int *ptr=&num;

    // cout<<"Address is->"<<ptr<<endl;
    // cout<<"Value is->"<<*ptr<<endl;

    // double d=4.3;
    // double *p2=&d;

    // cout<<"Address is->"<<p2<<endl;
    // cout<<"Value is->"<<*p2<<endl;

    // cout<<"Size of integer is->"<<sizeof(num)<<endl;
    // cout<<"Size of pointer is->"<<sizeof(ptr)<<endl;
    // cout<<"Size of pointer is->"<<sizeof(p2)<<endl;
   

//    int *p=0;
//    cout<<*p<<endl;

// int *q=&num;
// cout<<q<<endl;
// cout<<*q<<endl;

// int *p=0;
// p=&num;
// cout<<p<<endl;
// cout<<*p<<endl;
int num=9;

int a=num;
cout<<"Before "<<num<<endl;
a++;
cout<<"After "<<num<<endl;

cout<<endl;

int *p=&num;
cout<<"Before "<<num<<endl;
(*p)++;
cout<<"After "<<num<<endl;

cout<<endl;

int *q=p;
cout<<p<<"-"<<q<<endl;
cout<<*p<<"-"<<*q<<endl;

cout<<endl;

int i=4;
int *t=&i;
cout<<++(*t)<<endl;
*t=*t+1;
cout<<*t<<endl;
cout<<"before "<<t<<endl;
t=t+1;
cout<<"after "<<t<<endl;
    return 0;
}
