#include<iostream>
using namespace std;

void printCount(int n)
{
    for(int i = 1; i<=n;i++)
    {   if(i%10==0)
        cout<<i<<endl;
        else
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter value of n = ";
    cin>>n;

    printCount(n);
    return 0;
}