#include<iostream>
using namespace std;

int main()
{
    //Sum of 1 to N
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n)
    {
        sum +=i;
        i +=1;
    }

    cout<<"Value of Sum is : "<<sum<<endl;
    

    return 0;
}