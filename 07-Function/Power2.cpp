#include<iostream>
using namespace std;

int power(int num1,int num2)
{
    int ans=1;
    for(int i=1;i<=num2;i++)
    {
        ans=ans*num1;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter thr value of a and b= ";
    cin>>a>>b;

    int answer=power(a,b);
    cout<<"Answer of given n umber is= "<<answer<<endl;  

    return 0;
}