#include<iostream>
using namespace std;

int main(){
    char ch = 'b';
    int num=1;

    cout<<endl;

    switch(ch)
    {
        case 'a':cout<<"Aman Yadav"<<endl;
                break;

        case 'b':switch(num)
                  {
                    case 1: cout<<"Value of Number is "<<++num<<endl;
                            break;
                  }
                break;

        default:cout<<"It is Default Case"<<endl;     
    }
    cout<<endl;
    return 0;
}