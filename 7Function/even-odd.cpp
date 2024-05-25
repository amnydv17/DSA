#include<iostream>
using namespace std;


int isEven(int a)
{
    if(a&1)//odd
    {
        return 0;
    }
    else{//Even
        return 1;
    }
}
int main(){
    
    int a;
    cout<<"Enter the Number= ";
    cin>>a;

    if(isEven(a))
    {
        cout<<"Number is Even."<<endl;
    }
    else{
        cout<<"Number is Odd."<<endl;
    }
    return 0;
}