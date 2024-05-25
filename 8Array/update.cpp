#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    cout<<endl<<"Inside function"<<endl<<endl;;

    //update array's first element
    arr[0]=123;

    //printing array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<endl<<"Going Back to main function"<<endl;
}
int main(){
    int arr[3]={1,2,3};

    update(arr,3);

    //printing array
    cout<<endl<<"Printing in Main function"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}