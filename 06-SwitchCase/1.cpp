#include<iostream>
using namespace std;

int main(){
    char ch = 'a';

    cout<<endl;

    switch(ch)
    {
        case 'a':cout<<"Aman Yadav"<<endl;
                break;

        case 'b':cout<<"Second Yadav"<<endl;
                break;

        default:cout<<"It is Default Case"<<endl;     
    }
    cout<<endl;
    return 0;
}