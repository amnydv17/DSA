#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter The Value of a= ";
    cin>>a;
    
    int b;
    cout<<"Enter The Value of b= ";
    cin>>b;

    char op;
    cout<<"Enter the Opration You want to perform."<<endl;
    cin>>op;

    switch(op)
    {
        case '+':   cout<<(a+b)<<endl;
                    break;

        case '-':   cout<<(a-b)<<endl;
                    break;

        case '*':   cout<<(a*b)<<endl;
                    break;

        case '/':   cout<<(a/b)<<endl;
                    break;

        case '%':   cout<<(a%b)<<endl;
                    break;

        default:cout<<"Enter a valid opration"<<endl;

    }
    return 0;
}