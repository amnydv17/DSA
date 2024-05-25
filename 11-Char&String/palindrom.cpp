#include<iostream>
using namespace std;


char toLowercase(char ch)
{
    if(ch>='a' && ch<='z')
    return ch;
    else
    {
        char temp=ch - 'A' + 'a';
        return temp;
    }
}
bool palindrom(char name[], int n)  
{
    int s=0,e=n-1;
    while(s<=e)
    {
    if(toLowercase(name[s]) != toLowercase(name[e]))
    return 0;

    else
    s++,e--;
    }
    return 1;
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

    cout<<endl;

    cout<<"Palindrome or not->"<<palindrom(name,len)<<endl;
    cout<<endl;
    return 0;
}