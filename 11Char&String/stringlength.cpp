#include<iostream>
using namespace std;

int getLength(char name[])
{
    int size=0;
    for(int i=0;name[i]!='\0';i++)
    {
        size++;
    }
    return size;
}
int main(){
    
    char name[20];
    cout<<"Enter Your Name->"<<endl;
    cin>>name;

    cout<<endl;

    cout<<"Length of string is->"<<getLength(name)<<endl;
    return 0;
}