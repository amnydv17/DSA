#include<iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
    swap(name[s++],name[e--]);
    }
}
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

    int len=getLength(name);
    cout<<"Length of string is->"<<len<<endl;

    cout<<endl;

    reverse(name,len);
    cout<<"Your Reverse name is->";
    cout<<name<<endl;
    cout<<endl;
    return 0;
}